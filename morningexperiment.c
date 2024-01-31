#include <stdio.h>

int main()
{
    int n1; 
    int n2 = 1;

    printf("Scrivi un numero\n");
    scanf("%d", &n1);

    if(n1 > 10)
    {
        printf("ERROR\n");
    }
    else
    {
        while(n1 < 10) //condition
        {
            
            n2 = n2 * n1;
            n1 = n1 + 1; //incremento, questo fa aumentare il valore di x
            
            printf("%d\n", n1);
        }
        printf("Done\n"); //se la condition è falsa
    }
   
    return(0);
}