#include <stdio.h>

int main()
{
    int n1;

    printf("Inserisci la tua età\n");
    scanf("%d", &n1);
    if(n1 >= 18)
    {
        printf("Puoi compra le ciospe\n");
    }
    else
    {
        printf("Sei minorenne e sei ncojone\n");
    }    
    
    return(0);
}