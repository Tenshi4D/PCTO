#include <stdio.h>

int main()
{
    int n1;

    printf("In che anno sei nato\n");
    scanf("%d", &n1);

    if(n1 > 1969)
    {
        printf("Sei nato %d anni dopo lo sbarco sulla Luna.\n", (n1 - 1969));
    } 
    else if(n1 < 1969)
    {
        printf("Sei nato %d anni prima dello sbarco sulla Luna.\n", (1969 - n1));
    }
    else 
    {
        printf("Sei nato nello stesso anno in cui l'uomo è sbarcato sulla Luna!\n");
    }
    return(0);
}