#include <stdio.h>

double radiceQuadrata(double numero) 
{
  double approssimazione = numero / 2.0;
  double differenza = numero - approssimazione * approssimazione;
  while (differenza > 0.00001) {
    approssimazione = (approssimazione + numero / approssimazione) / 2.0;
    differenza = numero - approssimazione * approssimazione;
  }
  return approssimazione;
}

int main()
{
    int n1, n2, n3;
    
    printf("Scrivi 3 numeri\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if(n1 + n2 > n3 && n2 + n3 > n1 && n3 + n1 > n2)
    {
        int area;
        int perimetro;

        printf("È un triangolo;\n");
        printf("Perimetro = %d\n", perimetro);
        
        perimetro = n1 + n2 + n3;
        double numero = 10.89;
        double risultato = radiceQuadrata(perimetro * (perimetro - n1) * (perimetro - n2) * (perimetro - n3));
        printf("La radice quadrata di %lf è %lf\n", numero, risultato);

        area = risultato;


    }
    else
    {
        printf("Non è un triangolo.\n");
    } 

    return(0);
}