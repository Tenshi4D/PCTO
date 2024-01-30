#include <stdio.h>

int main()
{
    int n1;
    
    printf("Scrivi un anno\n");
    scanf("%d", &n1);

    // Per avere condizione1 AND condizione2 metti "&&", 
    // per condizione 1 OR condizione2 metti "||".
    
    if(n1%4 == 0 && n1%100 != 0)
    {
        printf("E' un anno bisestile.\n");
    }
    else
    {
        printf("Non è un anno bisestile, ucciditi.\n");
    } 

    return(0);
}