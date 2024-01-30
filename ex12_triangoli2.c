#include <stdio.h>

int main()
{
    int n1, n2, n3;
    
    printf("Scrivi 3 numeri\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 + n2 > n3 && n2 + n3 > n1 && n3 + n1 > n2)
    {
        
        if(n1 == n2 && n2 == n3)
        {
            printf("Il triangolo è equilatero.\n");
        } 
        else if(n1 == n2 || n2 == n3 || n3 == n1)
        {
            printf("Il triangolo è isoscele.\n");
        }
        else 
        {
            printf("Il triangolo è scaleno\n");
        }
   
    }    
    else
    {
        printf("Non è un triangolo\n");
    }
    return(0);
}