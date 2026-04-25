<?php

$productUrls = [
    'https://victoriavynn.com/pl/gel-polish-just-base-frozen',
    'https://victoriavynn.com/pl/gel-polish-just-base-rosen',
    // Add more product URLs
];

function getHtmlFromUrl($url) {
    $context = stream_context_create([
        'http' => ['header' => "User-Agent: Mozilla/5.0\r\n"]
    ]);
    return @file_get_contents($url, false, $context);
}

function getElementByIdHtml(DOMDocument $doc, $id) {
    $element = $doc->getElementById($id);
    return $element ? getInnerHtml($element) : 'N/A';
}

function getInnerHtml($node) {
    $innerHTML = '';
    foreach ($node->childNodes as $child) {
        $innerHTML .= $node->ownerDocument->saveHTML($child);
    }
    return trim($innerHTML);
}

$results = [];
$index = 1;

foreach ($productUrls as $url) {
    echo "$index : 🔍 Scraping : $url <br>";
    $html = getHtmlFromUrl($url);

    $index++;

    if (!$html) {
        echo "❌ Failed to load $url\n";
        continue;
    }

    libxml_use_internal_errors(true);
    $doc = new DOMDocument();
    $doc->loadHTML($html);

    // Add 'ID' which data we can fetch
    $descriptionHtml = getElementByIdHtml($doc, 'description');
    $inciHtml        = getElementByIdHtml($doc, 'inci');
    $howToUseHtml    = getElementByIdHtml($doc, 'how-to-use');

    $results[] = [
        'url' => $url,
        'description' => $descriptionHtml . '<br><br>' . $inciHtml,
        'how_to_use' => $howToUseHtml,
    ];

    sleep(1); // Be polite to the server
}

// Save to CSV
$csv = fopen('products_scraped.csv', 'w');
fputcsv($csv, ['URL', 'Description HTML', 'How to Use HTML']);

foreach ($results as $row) {
    fputcsv($csv, [$row['url'], $row['description'], $row['how_to_use']]);
}

fclose($csv);
echo "<br>";
echo "\n✅ Done. Output saved to products_scraped.csv\n";
