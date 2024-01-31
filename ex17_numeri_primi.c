#include <stdio.h>

int main()
{
    int n1;
    int x = 2; // x parte da 2
    int divisori = 0;
   
    printf("scrivi un numero\n"); //primo print
    scanf("%d", &n1); //scan il numero scritto
    
    while(x < n1) // fino a che il numero scritto è maggiore di 2 (sono sempre primi i numeri < 2)
    {
        if(n1 % x == 0) // se n1 è divisibile per x (che viene incrementato, quindi sono tutti i numeri)
        {
            divisori = divisori + 1; // allora incrementa anche divisori
        }
        x = x + 1; // incremento
    }

    if (divisori == 0)
    {
        printf("primo\n");
    }
    else
    {
        printf("non primo\n");
    }
    return(0);
}