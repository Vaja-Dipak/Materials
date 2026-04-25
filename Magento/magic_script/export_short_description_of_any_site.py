import requests
from bs4 import BeautifulSoup
import csv
import time

# Category base URL (paginated)
BASE_URL = 'https://ibloom.no/merker/victoria-vynn-produkter-norge?p={}'

HEADERS = {
    'User-Agent': 'Mozilla/5.0'
}

def get_product_links(page_html):
    soup = BeautifulSoup(page_html, 'html.parser')
    return [a['href'] for a in soup.select('a.product-item-link')]

def extract_name_and_short_description(product_url):
    try:
        res = requests.get(product_url, headers=HEADERS)
        soup = BeautifulSoup(res.text, 'html.parser')

        name = soup.select_one('h1.page-title span.base')
        description = soup.select_one('.order-3 .product-description p')
        # description = soup.select_one('.product.attribute.description .value')

        return (
            name.text.strip() if name else 'N/A',
            description.text.strip() if description else 'N/A'
        )
    except Exception as e:
        print(f"Error parsing {product_url}: {e}")
        return ('N/A', 'N/A')

all_products = []

# Adjust range as needed for number of pages in the category
for page in range(1, 2):
    print(f"\n🔄 Scraping category page {page}")
    url = BASE_URL.format(page)
    res = requests.get(url, headers=HEADERS)

    if res.status_code != 200:
        print(f"Page {page} returned status code {res.status_code}. Stopping.")
        break

    links = get_product_links(res.text)
    if not links:
        print("No more product links found.")
        break

    for link in links:
        print(f"🔍 Scraping product: {link}")
        name, desc = extract_name_and_short_description(link)
        print(f"✅ {name} — {desc[:60]}")
        all_products.append([name, desc])
        time.sleep(1)  # Be polite to the server

# Save to CSV
with open('victoria_vynn_products.csv', 'w', newline='', encoding='utf-8') as f:
    writer = csv.writer(f)
    writer.writerow(['Product Name', 'Short Description'])
    writer.writerows(all_products)

print("\n🎉 Done! Data saved to victoria_vynn_products.csv")
