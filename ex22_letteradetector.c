#include <stdio.h>

void letteradetector()
    
    {
        char lettera;
        scanf("%c", &lettera);
        if
            (
            lettera == 'a' || lettera == 'e' || lettera == 'i' || lettera == 'o' || lettera == 'u' || lettera == 'y'
            )
            
        {
            printf("E' una vocale\n");
        }
        else
        {
            printf("E' una consonante\n");
        }
    }   


int main()
    
    {
        
        printf("Scrivi una lettera\n");
        
        letteradetector();

        return(0);
    }