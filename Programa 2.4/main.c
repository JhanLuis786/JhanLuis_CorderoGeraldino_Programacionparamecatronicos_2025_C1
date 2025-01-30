#include <stdio.h>
#include <stdlib.h>

/* Incremento de precio.
El programa al recibit como dato el precio de un producto, incrementaal mismo 11% si es menor a $1,500.00 y encaso contrario (mayor o igual).

PRE y NPR: son variables de tipo real. */

int main()
{
    float PRE, NPR;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &PRE);
    if (PRE < 1500)
        NPR = PRE * 1.11;
    else
        NPR = PRE * 1.08;
    printf("\nNuevo precio del producto: %8.2f", NPR);
    return 0;
}
