#include <stdio.h>

int main()
{
    printf("Scrivi 4 età:\n");
    int n1;
    int n2;
    int n3;
    int n4;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    printf("La somma degli anni è %d\n", (n1 + n2 + n3 + n4));

    return(0);
}