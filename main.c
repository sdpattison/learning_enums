#include <stdio.h>

int main() {
    enum Company { Google, Facebook, Xerox, Yahoo, Ebay, Microsoft, Amazon };
    enum Company companyOne = Xerox;
    enum Company companyTwo = Google;
    enum Company companyThree = Ebay;
    printf("%d\n%d\n%d\n", companyOne, companyTwo, companyThree);
    return 0;
}
