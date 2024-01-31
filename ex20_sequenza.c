#include <stdio.h>

int main()
{
    
    float n1 = 0; //numero inserito
    float n2 = 0; //somma
    float n3 = 0; //quanti numeri
    float media;

    while(n1 >= 0)
    {

        printf("\nInserisci un numero positivo\n\n");
        scanf("%f", &n1);
        if(n1 < 0)
        {
            printf("\nTi ho detto positivo, coglione\n\n");
        }
        else
        {   
            n2 = n2 + n1;
            n3 = n3 + 1;
            media = n2/n3;
            printf("\nMedia = %f\n", (media));
        }

    }
    
    return(0);

}