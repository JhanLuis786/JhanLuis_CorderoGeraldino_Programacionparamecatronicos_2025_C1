#include <stdio.h>
#include <math.h>

/* Suma de cuadrados.
El programa, al recibir como datos un grupo de enteros positicvos, obtiene elcuadrado de los mismos y la suma correspondiente a dichos cuafrafos. */

int main()
{
    int NUM;
    long CUA, SUC = 0;
    printf("\nIngrese un numero entero -0 para terminar-:\t");
    scanf("%d", &NUM);
    while (NUM)
    /* Observa que la condicion es verdadera mientras el entero es diferente de cero. */
    {
        CUA = pow (NUM, 2);
        printf("%d al cubo es %ld", NUM, CUA);
        SUC = SUC + CUA;
        printf("\nIngrese un numero entero - para terminar-:\t");
        scanf("%d", &NUM);
    }
    printf("\nLa suma de los cuadeados es %ld", SUC);
    return 0;
}
