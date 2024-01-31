#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    int n1; //secret number
    int n2 = 0; //guessed number
    int punti;
    punti = 0;
    
    while(n2 >= 0)
    {

    printf("Sto pensando a un numero da 0 a 5... Indovina\n\n");
    scanf("%d", &n2);
    
    srand(time(NULL));
    n1 = rand() % 6;
    
    if(n1 == n2)
    {  
        {
        printf("\nBravo!\n\n");
        
        punti = punti + 1;
        printf("Punteggio = %d\n\n", punti);
        }
    }
    else
    {
        printf("\nCojone, era %d\n\n", n1);
    }

    }
    return 0;
}

