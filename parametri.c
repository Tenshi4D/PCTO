#include <stdio.h>

void somma(int a, int b) // a = x, b = y | void si chiama void perchè non ha return; se voglio tornare alla somma metto int somma; (); return (somma)
    
    {
        printf("somma: %d\n", a + b); // se per esempio metto a = 10 in questa funzione, quindi un valore diverso da x, quando ritorna a main il valore torna x
    }

int main() // per riprendere return (somma) che ho scritto questo verra messo in automatico dentro somma(x, y);
    
    {
        int x = 5;
        int y = 7;
        somma(x, y); // come posso mandare queste variabili all'altra funzione? porcaccio dio?

        return(0);
    }