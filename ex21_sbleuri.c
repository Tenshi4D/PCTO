#include <stdio.h>

int main()
{
    float n1; // numero dei pezzi
    float sconto10; //sconto
    float sconto15; //sconto 2

    while(n1 > 0)
    {
        
        printf("Quanti pezzi vuoi prendere bro?\n");
        scanf("%f", &n1);

        if(n1 <= 0)
        {
            printf("Non puoi avere 0 pezzi/pezzi negativi coglione.\n");
        }
        else
        {   

            if(n1 >= 50)
            {
                sconto15 = (n1 * 5) * 0.85;
                printf("Complimenti, hai uno sconto del 15 percento!, il tuo ordine costa %f sbleuri\n", sconto15);
            }
            else if(n1 >= 30)
            {
                sconto10 = (n1 * 5) * 0.9;
                printf("Complimenti, hai uno sconto del 10 percento!, il tuo ordine costa %f sbleuri\n", sconto10);
            }
            else 
            {
                printf("Il tuo ordine costa %f sbleuri\n", (n1 * 5));
            }
        }
    }
    return(0);
}