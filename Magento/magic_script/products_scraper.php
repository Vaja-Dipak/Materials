<?php

// 🔧 List your product URLs here
$productUrls = [
    'https://germanparts.ae/shop/trw-rear-brake-pad-set-7p0698451',
    // Add more product URLs...
];

function getHtmlFromUrl($url) {
    $context = stream_context_create([
        'http' => ['header' => "User-Agent: Mozilla/5.0\r\n"]
    ]);
    return @file_get_contents($url, false, $context);
}

function extractText($xpath, $query) {
    $nodes = $xpath->query($query);
    return ($nodes->length > 0) ? trim($nodes[0]->textContent) : '';
}

function extractMultipleText($xpath, $query) {
    $result = [];
    foreach ($xpath->query($query) as $node) {
        $result[] = trim($node->textContent);
    }
    return $result;
}

function extractPrice($xpath) {
    $priceText = $xpath->evaluate("string(//div[contains(@class,'product__price--current')])");
    // Extract numeric part only
    if (preg_match('/([\d,]+)/', $priceText, $matches)) {
        return str_replace(',', '', $matches[1]);
    }
    return '';
}

function extractImages($xpath) {
    $links = [];
    $nodes = $xpath->query("//div[contains(@class, 'product-gallery__featured')]//div[contains(@class, 'owl-carousel')]//a");
    foreach ($nodes as $node) {
        $href = trim($node->getAttribute('href'));
        if (!empty($href)) {
            if (strpos($href, '//') === 0) {
                $href = 'https:' . $href;
            } elseif (strpos($href, '/') === 0) {
                $href = 'https://germanparts.ae' . $href;
            }
            $links[] = $href;
        }
    }

    return $links;
}

function extractAttributes($xpath) {
    $attributes = [];

    // 1. From .product__meta table
    $metaRows = $xpath->query("//div[contains(@class,'product__meta')]//tr");
    foreach ($metaRows as $row) {
        $th = $xpath->query(".//th", $row);
        $td = $xpath->query(".//td", $row);

        if ($th->length && $td->length) {
            $label = trim($th[0]->textContent);
            $value = trim($td[0]->textContent);

            // Prefer anchor text if available
            if ($td[0]->hasChildNodes()) {
                foreach ($td[0]->childNodes as $child) {
                    if ($child->nodeName === 'a' && trim($child->textContent)) {
                        $value = trim($child->textContent);
                        break;
                    }
                }
            }

            if ($label !== '') {
                $attributes[$label] = $value;
            }
        }
    }

    // 2. From .spec__section
    $specRows = $xpath->query("//div[contains(@class,'spec__section')]//div[contains(@class,'spec__row')]");
    foreach ($specRows as $row) {
        $nameNode = $xpath->query(".//div[contains(@class,'spec__name')]", $row);
        $valueNode = $xpath->query(".//div[contains(@class,'spec__value')]", $row);

        if ($nameNode->length && $valueNode->length && $nameNode[0]->textContent !== "SKU") {
            $label = trim($nameNode[0]->textContent);
            $value = trim($valueNode[0]->textContent);

            if ($label !== '') {
                $attributes[$label] = $value;
            }
        }
    }

    return $attributes;
}

function extractReferences($xpath) {
    $references = [];
    $nodes = $xpath->query("//div[contains(@class,'product__tags')]//div[contains(@class,'tags__list')]//a");
    foreach ($nodes as $node) {
        $text = trim($node->textContent);

        if ($text !== '') {
            $references[] = $text;
        }
    }
    return $references;
}

function extractCompatibility($xpath) {
    return implode(', ', extractMultipleText($xpath, "//div[contains(@class,'compatibility__item')]"));
}

function extractShortDescription($xpath) {
    $text = $xpath->evaluate("string(//div[contains(@class,'spec__disclaimer')])");
    // Normalize whitespace: remove newlines, tabs, multiple spaces
    $clean = preg_replace('/\s+/', ' ', $text);
    $clean = "<p>" . $clean . "</p>";
    return htmlspecialchars($clean);
}

function extractLongDescription($xpath) {
    $nodes = $xpath->query("//div[@id='product-tab-description']//p");
    $paragraphs = [];

    foreach ($nodes as $node) {
        $text = trim($node->textContent);
        if ($text !== '') {
            $paragraphs[] = $text;
        }
    }
    $htmlParagraphs = convertParagraphsToHtml($paragraphs);

    return htmlspecialchars($htmlParagraphs);
}

function convertParagraphsToHtml($paragraphs) {
    $html = '';
    foreach ($paragraphs as $para) {
        $clean = trim($para);
        if (!empty($clean)) {
            $html .= '<p>' . $clean . '</p>';
        }
    }
    return trim($html);
}

// Scrape all products
$results = [];
$index = 1;

foreach ($productUrls as $url) {
    echo "🔍 [$index] Scraping: $url <br>";
    $html = getHtmlFromUrl($url);
    $index++;

    if (!$html) {
        echo "❌ Failed to load $url\n";
        continue;
    }

    libxml_use_internal_errors(true);
    $doc = new DOMDocument();
    $doc->loadHTML($html);
    $xpath = new DOMXPath($doc);

    $name = extractText($xpath, "//h1[contains(@class,'product__title')]");
    $price = extractPrice($xpath);
    $images = extractImages($xpath);
    $attributes = extractAttributes($xpath);
    $references = extractReferences($xpath);
    $shortDescription = extractShortDescription($xpath);
    $longDescription = extractLongDescription($xpath);
    $compatibility = extractCompatibility($xpath);

    $results[] = [
        'URL' => $url,
        'Name' => $name,
        'SKU' => $attributes['SKU'],
        'Price' => $price,
        'Images' => implode(', ', $images),
        'Attributes' => json_encode($attributes),
        'References' => json_encode($references),
        'Compatibility' => $compatibility,
        'Short Description' => $shortDescription,
        'Long Description' => $longDescription,
    ];

    sleep(1); // Be polite to server
}

// Save to CSV
$csv = fopen('germanparts_scraped_products.csv', 'w');
fputcsv($csv, array_keys($results[0]));

foreach ($results as $row) {
    fputcsv($csv, $row);
    echo "<pre>";
    print_r($row);

}

fclose($csv);
echo "\n✅ Done. Saved to germanparts_scraped_products.csv\n";
