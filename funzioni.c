#include <stdio.h>

void stampaCubo()
    
    {
        int numero;
        int cubo;
        printf("Inserisci il cubo da fare: ");
        scanf(" %d", &numero);
        cubo = numero * numero * numero;
        printf("Il cubo di %d è %d\n", numero, cubo);
    }

void stampaQuadrato()

    {
        int numero;
        int quadrato;
        printf("inserisci il quadrato da fare: ");
        scanf(" %d", &numero);
        quadrato = numero * numero;
        printf("Il quadrato di %d è %d\n", numero, quadrato);
    }

int main()
    
    {
        printf("Quadrato\n");
        stampaQuadrato();
        printf("Cubo\n");
        stampaCubo();
        printf("Quadrato\n");
        stampaQuadrato();
        printf("Cubo\n");
        stampaCubo();

        return(0);
    }