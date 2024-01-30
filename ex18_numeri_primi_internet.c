#include <stdio.h>

int main()
{
   int n1, n2;
   int n3 = 1;
   
   printf("Metti un numero\n");
   scanf("%d", &n2);

   for(n1 = 2; n1 < n2; n1++) 
   
      {
         if(n2%n1 == 0) 
         {
            n3 = 0;
         }
      }

   if (n3 == 1)
      
      printf("%d è un numero primo.", n2);
   
   else
      
      printf("%d non è un numero primo.", n2);
   
   return(0);
}