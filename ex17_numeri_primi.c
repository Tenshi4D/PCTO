#include <stdio.h>

int main()
{
    int n1;
    int n2 = 2; // x parte da 2
    int n3 = 0;
   
    printf("scrivi un numero\n"); //primo print
    scanf("%d", &n1); //scan il numero scritto
    
    while(n2 < n1) // fino a che il numero scritto è maggiore di 2 (sono sempre primi i numeri < 2)
    {
        if(n1 % n2 == 0) // se n1 è divisibile per x (che viene incrementato, quindi sono tutti i numeri)
        {
            n3 = n3 + 1; // allora incrementa anche divisori
        }
        n2 = n2 + 1; // incremento
    }

    if (n3 == 0)
    {
        printf("primo\n");
    }
    else
    {
        printf("non primo\n");
    }
    return(0);
}