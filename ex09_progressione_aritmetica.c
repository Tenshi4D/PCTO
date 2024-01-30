#include <stdio.h>

int main()
{
    int n1, n2, n3;
    
    printf("Scrivi 3 numeri\n");
    scanf("%d %d %d", &n1,&n2,&n3);

    if(n3 - n2 == n2 - n1)
    {
        printf("E' una progressione aritmetica, complimenti.\n");
    }
    else
    {
        printf("Non è una progressione aritmetica, fai cagare.\n");
    } 

    return(0);
}