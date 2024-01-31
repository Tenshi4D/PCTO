#include <stdio.h>

int main()
{
    float n1;
    float n2;
    int n3;
    int n4;

    printf("Inserisci due numeri\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    n3 = n1;
    n4 = n2;
    printf("n1 + n2: %f\n", (n1 + n2));
    printf("n1 - n2: %f\n", (n1 - n2));
    printf("n1 * n2: %f\n", (n1 * n2));
    printf("n1 / n2: %f", (n1 / n2));
    printf(" con resto di %d\n", (n3 % n4));
    
    return(0);
}