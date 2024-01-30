#include <stdio.h>

int main()
{
    int n1, n2, n3;
    
    printf("Scrivi 3 numeri\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 + n2 > n3 && n2 + n3 > n1 && n3 + n1 > n2)
    {
        printf("Possono essere lati di un triangolo.\n");
    }
    else
    {
        printf("Sbagliato. Buttati nel tevere.\n");
    } 

    return(0);
}