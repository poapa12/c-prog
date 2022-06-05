#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Zadejte cele cislo: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Chyba! Faktorial zaporneho cisla neexistuje.");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Faktorial z %d = %llu", n, fact);
    }

    return 0;
}