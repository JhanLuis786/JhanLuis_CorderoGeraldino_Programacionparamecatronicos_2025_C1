#include <stdio.h>
#include <stdlib.h>

void f1(int *);

void main(void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamaer a las funcion: %d", ++K);
        printf("\nValor de Kdespues de llamar a las funcion: %d", f1(%K);
    }
}

void f1(int *R)
{
    *R +=R;
}
