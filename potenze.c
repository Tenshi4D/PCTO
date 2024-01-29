#include <stdio.h>

int main() 
{
    int base, exponent, limit;

    printf("Inerisci Base:\n");
    scanf("%d", &base);
    printf("Inserisci Esponente:\n");
    scanf("%d", &limit);

    printf("Powers of %d up to %d:\n", base, limit);
    for (exponent = 0; exponent <= limit; exponent++) {
        long long result = 1;
        for (int i = 1; i <= exponent; i++) {
            result *= base;
        }
        printf("%d^%d = %lld\n", base, exponent, result);
    }

    return 0;
}
