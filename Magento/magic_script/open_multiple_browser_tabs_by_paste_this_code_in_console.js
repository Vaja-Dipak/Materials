javascript:(function()
{
    const baseUrl = "https://victoriavynn.com/pl/catalogsearch/result/?q=";
    const queries = [
        "Victoria Vynn Pure Creamy Hybrid - 005 Powdery Rose",
        "Victoria Vynn Pure Creamy Hybrid - 007 Sweet Ice Cream",
        "Pure Creamy Hybrid 008 Ginger Tea 8ml",
        "DRILL BIT DIAMOND SMALL FLAME 1,6mm",
        "DRILL BIT CARBIDE TORNADO 7mm",
        "DRILL BIT CARBIDE CYCLONE 6mm",
        "PURE CREAMY HYBRID 237 Epochal Pink 8ml",
        "PURE CREAMY HYBRID 238 Decadent Lily 8ml"
    ];
    queries.forEach(q => {
        const url = baseUrl + encodeURIComponent(q);
        window.open(url, '_blank');
    });
})();
