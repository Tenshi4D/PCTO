#include <stdio.h>

int main()
{
    int n1;
    int x = 2; // x parte da 2
    int divisori = 0;
   
    printf("scrivi un numero\n");
    scanf("%d", &n1);
    
    while(x < n1)
    {
        if(n1 % x == 0)
        {
            divisori = divisori + 1;
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