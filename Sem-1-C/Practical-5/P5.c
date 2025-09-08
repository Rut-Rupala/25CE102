#include <stdio.h>

int main() {
    // Use long long for very large population numbers
    long long totalPopulation = 1441981744LL;  
    double percentWomen = 48.4, percentMen;
    double literacyRateMen = 80.95, literacyRateWomen = 62.84;
    
    // Derived values
    percentMen = 100.0 - percentWomen;

    // Calculate men and women count
    long long women = (long long)(totalPopulation * (percentWomen / 100.0));
    long long men = totalPopulation - women;

    // Literate & Illiterate counts
    long long literateMen = (long long)(men * (literacyRateMen / 100.0));
    long long illiterateMen = men - literateMen;

    long long literateWomen = (long long)(women * (literacyRateWomen / 100.0));
    long long illiterateWomen = women - literateWomen;

    long long totalLiterate = literateMen + literateWomen;
    long long totalIlliterate = illiterateMen + illiterateWomen;

    // Literacy gap
    double gap = literacyRateMen - literacyRateWomen;

    // Output in tabular format
    printf("\n------------------------------------------------------\n");
    printf("| %-12s | %-15s | %-15s |\n", "Category", "Literate", "Illiterate");
    printf("------------------------------------------------------\n");
    printf("| %-12s | %-15lld | %-15lld |\n", "Men", literateMen, illiterateMen);
    printf("| %-12s | %-15lld | %-15lld |\n", "Women", literateWomen, illiterateWomen);
    printf("------------------------------------------------------\n");
    printf("| %-12s | %-15lld | %-15lld |\n", "Total", totalLiterate, totalIlliterate);
    printf("------------------------------------------------------\n");

    // Literacy gap message
    if (gap > 0)
        printf("\nMen have a literacy advantage of %.2f%% over women.\n", gap);
    else if (gap < 0)
        printf("\nWomen have a literacy advantage of %.2f%% over men.\n", -gap);
    else
        printf("\nNo literacy gap between genders.\n");

    // What-if Analysis: 5% improvement for women
    double newRateWomen = literacyRateWomen + 5.0;
    if (newRateWomen > 100.0) newRateWomen = 100.0;

    long long newLiterateWomen = (long long)(women * (newRateWomen / 100.0));
    long long newIlliterateWomen = women - newLiterateWomen;

    printf("\n--- What-if Analysis (Women literacy +5%%) ---\n");
    printf("New Literate Women   : %lld\n", newLiterateWomen);
    printf("New Illiterate Women : %lld\n", newIlliterateWomen);

    return 0;
}
