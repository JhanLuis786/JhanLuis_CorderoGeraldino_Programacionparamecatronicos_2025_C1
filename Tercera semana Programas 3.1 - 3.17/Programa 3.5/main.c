#include <stdio.h>
#include <stdlib.h>

/* Suma de pagos.
El programa obtiene la suma de los pagos relizados el ultimo mes.

PAG y SPA: cariables de tipo real. */

int main()
{
    float PAG, SPA = 0;
    printf("Igerse el primer pago:\t");
    scanf("%f", &PAG);
    /* observa que al utilizar la estructura do-while al menos senecesita un pago. */
    do
    {
        SPA = SPA + PAG;
        printf("Ingrese el siguiente paho -0 para terminar-:\t");
        scanf("%f", &PAG);
    }
    while (PAG);
    printf("\nEl total de pagos del emes es: %.2f", SPA);
    return 0;
}
