#include <stdio.h>

void stampaAddizione(n1, n2)
{
    printf("%d", (n1 + n2));
}

int main()
{
    
    int operazione;
    float n1, n2;
    printf("Inserisci due numeri\n");
    scanf("%f %f", &n1,&n2);
    printf("Quale operazione vuoi fare tra addizione (1), sottrazione (2), moltiplicazione (3) o divisione (4)?\n");
    scanf("%d", &operazione);
    if(operazione == 1)
    {
        stampaAddizione();
    }

    return 0;

}