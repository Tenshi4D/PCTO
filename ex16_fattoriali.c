#include <stdio.h>

int main()
{
    int n1;

    printf("Inserisci un numero\n");
    scanf("%d", &n1);

    int result = 1;
    while(n1>0)
    {
        result = result * n1;
        n1 = n1 - 1;
    }
    printf("%d", result);

    return(0);
}