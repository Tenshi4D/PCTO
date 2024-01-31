#include <stdio.h>

int main()
{
    int n1;
    int n2 = 1;

    printf("Inserisci un numero\n");
    scanf("%d", &n1);

    
    while(n1 > 0)
    {
        n2 = n2 * n1;
        n1 = n1 - 1;
    }
    printf("%d", n2);

    return(0);
}