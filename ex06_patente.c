#include <stdio.h>

int main()
{
    int eta_per_patente;
    int eta_del_brother;

    printf("A quanti anni si puo' prendere la patente nel tuo paese?\n");
    scanf("%d", &eta_per_patente);
    printf("Quanti anni hai?\n");
    scanf("%d", &eta_del_brother);

    if(eta_del_brother >= eta_per_patente)
    {
        printf("Puoi prendere la patente yayyy\n");
    }
    else
    {
        printf("Aaspetta %d anni cojone vai a pia l'autobus\n", (eta_per_patente - eta_del_brother));
    }    
    
    return(0);
}