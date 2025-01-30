#include <stdio.h>
#include <stdlib.h>

/* Suma de pagos.
El programa, al recibir como datos un conjunto de pagos realizados en el ultimo mes, obtiene la duma de los mismos.

PAG y  SPA: variables deltipo real. */

int main()
{
    float PAG, SPA;
    SPA = 0;
    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);
    while (PAG)
        /* Observa que la condicione es verdadera mientras el pago es diferente de cero. */
    {
        SPA = SPA + PAG;
        printf("Ingrese el siguienate pago:\t");
        scanf("%f", &PAG);
        /* Observa que la proposivion que modifica la condicion  es una lectura */
    }
    printf("\nEl total de pagos del mes es: %.2f", SPA);
    return 0;
}
