#include <stdio.h>

int main() {
    enum companies { Google, Facebook, Xerox, Yahoo, Ebay, Microsoft, Amazon };
    enum companies companyOne = Xerox;
    enum companies companyTwo = Google;
    enum companies companyThree = Ebay;
    printf("%d\n%d\n%d\n", companyOne, companyTwo, companyThree);
    return 0;
}
