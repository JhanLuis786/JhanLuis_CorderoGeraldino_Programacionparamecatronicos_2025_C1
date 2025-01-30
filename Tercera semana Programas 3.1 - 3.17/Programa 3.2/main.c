#include <stdio.h>
#include <stdlib.h>

/*Suma de positivos.
El programa, al recibir como datos N numeros enteros, obtiene la suma de los enteros positivos.

I, N, NUM, SUM: variables de tipo entero. */

int main()
{
    int I, N, NUM, SUM;
    SUM = 0;
    printf("Ingrese elnumero de datos:\t");
    scanf("%d, &N");
    for (I=1; I<=N; I++)
    {
        printf("Ingrese eldato numero %d:\t", I);
        scanf("%d", &NUM);
    }
    printf("\nLa suma de los numeros positivos es: %d", SUM);
    return 0;
}
