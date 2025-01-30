#include <stdio.h>
#include <stdlib.h>
/* Incremento de precio.
El programa, al recibir como dato el precio de un producto importado, auementa 11% el mismo si este es inferior a $1,500.00.
PRE y NPR: variable de tipo real. */

int main()
{
    float PRE, NPR;
    printf("Ingrese le precio del producto: ");
    scanf("%f", &PRE);
    if (PRE > 1500)
    {
        NPR = PRE * 1.11;
        printf("\nNuevo Precio: %7.2f", NPR);

    }
    return 0;
}
