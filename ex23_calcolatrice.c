#include <stdio.h>

void operazione()
{
    float n1, n2;
    char a;

    printf("Inserisci 2 variabili\n");
    scanf("%f %f", &n1,&n2);
    printf("Che operazione vuoi fare? Scegli tra (+) (-) (*) (/)\n");
    scanf(" %c", &a);
    
    if(a == '+')
    {
        printf("Il risultato è %f\n", n1 + n2);
    }
    if(a == '-')
    {
        printf("Il risultato è %f\n", n1 - n2);
    }
    if(a == '*')
    {
        printf("Il risultato è %f\n", n1 * n2);
    }
    if(a == '/')
    {
        printf("Il risultato è %f\n", n1/n2);
    }
}

int main()
{
    operazione();
    
    return 0;
}
