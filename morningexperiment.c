#include <stdio.h>

int main()
{
    int n1; 

    printf("Scrivi un numero\n");
    scanf("%d", &n1);
    
    while(n1 < 10) //condition
    {
        n1 = n1 + 1; //incremento, questo fa aumentare il valore di x
        
        printf("%d\n", n1);
        // if(n1%2==0) //condition ulteriore all'incremento
        // {
        //    printf("%d\n", n1); //se la condition è vera
        //}
    }
    
    printf("Done\n"); //se la condition è falsa

   
    return(0);
}