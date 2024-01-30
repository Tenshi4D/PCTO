#include <stdio.h>

int main()
{
    int i;
    i = 0;

    while(i <= 20)
    {
        printf("%d\n", i); //blocco 1 (condizione vera)
        i = i + 2;
    }
    
    printf("Capo, ho finito di stampare\n"); //blocco 2 (condizione falsa)
    
    return(0);
}