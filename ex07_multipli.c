#include <stdio.h>

int main()
{
    int n1;
    int n2;

    printf("Scrivi un numero\n");
    scanf("%d", &n1);
    printf("Scrivi un altro numero\n");
    scanf("%d", &n2);

    if(n1%n2 == 0)
    {
        printf("Il secondo numero è multiplo del primo\n");
    }
    else
    {
        printf("Il secondo numero non è multiplo del primo\n");
    }   
    return(0);
}