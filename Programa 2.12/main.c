#include <stdio.h>
#include <math.h>

/* Igualdad de expresiones.
El programa, al recibir comodatos T, P y N, comprueba la  igualdad de una expresion determinada.

T, P y N: cariables de tipo entero. */

int main()
{
    int T, P, N;
    printf("Ingrese los valores de T, p y N: ");
    scanf("%d %d %d", &T, &P, &N);
    if(P != 0)
    {
        if (pow(T / P, N) == (pow(T, N) / pow(P, N)))
            printf("\nNO se comprueba la igualdad");
            else
                printf("\nP tiene que ser diferente de cero");
    }
    return 0;
}
