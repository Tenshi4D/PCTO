#include <stdio.h>

int main()
{
    int n1;
    n1 = 100; //numero iniziale

    while(n1 > 0)
    {
        printf("%d\n", n1); 
        n1 = n1 - 2; //azione che viene loopata
    }
    
    printf("Capo, ho finito di stampare\n");
    
    return(0);
}