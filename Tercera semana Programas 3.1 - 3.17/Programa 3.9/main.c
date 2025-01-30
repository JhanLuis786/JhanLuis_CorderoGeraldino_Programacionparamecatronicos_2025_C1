#include <stdio.h>
#include <stdlib.h>

/* Serie.
El programa imprime los terminos y obtiene la suma de una determinada serie.

I, SSE Y CAM: variables de tipo entero. */

int main()
{
    int I = 2, CAM = 1;
    long SSE = 0;
    while (I <= 2500)
{
        SSE = SSE + I;
        printf("\t %d", I);
        if (CAM)
        }
    else
        {

        I += 5;
        CAM--;
        }
}
    printf("\nLa suma de la serie es: %ld", SSE);
    return 0;

