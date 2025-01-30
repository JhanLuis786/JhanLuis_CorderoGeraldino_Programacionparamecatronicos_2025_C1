#include <stdio.h>
#include <stdlib.h>

/* Fibonacci.
El programa calcula y escrube los prineros 50  numeros de Fibonacci.

I, PRI, SEG, SIG: variablres de tipo entero. */

int main()
{
    int I, PRI = 0, SEG = 1, SIG;
    printf("\t %d \t %d", PRI, SEG);
    for (I = 3; I<= 50; I++)
    {
        SIG = PRI + SEG;
        PRI = SEG;
        SEG = SIG;
        printf("\t %d", SIG);
    }
    return 0;
}
