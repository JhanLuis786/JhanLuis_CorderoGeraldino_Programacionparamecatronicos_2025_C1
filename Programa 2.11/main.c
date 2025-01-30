#include <stdio.h>
#include <stdlib.h>

/* BIllete de ferrocarril.
El programa calcula el costo de un billete de ferrocarril teniendo en cuentala distancia entre las dos ciudades y el tiempo de permanencia del pasahero:

DIS y TIE: vatiables de tipo entero.
BIL: cariable de tipo real. */

int main()
{
    int DIS, TIE;
    float BIL;
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
    scanf("%d %d", &DIS, &TIE);
    if ((DIS*2 > 500) && (TIE > 10))
        BIL = DIS * 2 * 0.19 * 0.8;
    else
        BIL = DIS * 2 * 0.19;
    printf("\n\nCosto del billete: %7.2f", BIL);
    return 0;
}
