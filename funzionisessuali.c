#include <stdio.h>

void stampaSesso()
    
    {
        printf("Ah Sesso Ah Ah\n");
        stampaSesso();
    }

int main()
    
    {
        stampaSesso();

        return(0);
    }