#include <stdio.h>

int main()
{
    float n1;

    printf("Inserisci il tuo anno di nascita preciso coi decimali pls\n");
    scanf("%f", &n1);
    printf("Hai %f anni\n", (2024.07 - n1));
    
    return(0);
}