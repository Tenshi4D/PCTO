#include <stdio.h>

int main()
{
    float n1, n2, n3;
    
    printf("Scrivi una temperatura (Celsius)\n");
    scanf("%f", &n1);
    n2 = 1.8 * n1 + 32;
    n3 = n1 + 273.15;

    // FARENHEIT
    printf("Il tuo valore in Farenheit è %f\n", n2); 
    
    // KELVIN
    if(n3 > 0)
    {
        printf("Il tuo valore in Kelvin è %f\n", n3);
    }
    else
    {
        printf("Il tuo valore va sotto lo 0 assoluto\n");
    }   
    
    return(0);
}