#include <stdio.h>
#include <stdlib.h>

/* Nomina de profesores.
El programa, al recibir como daros los salarios de los profesoresde una universidad. obtiene lanomina y el promedio de los salarios.

I: variable de tipo entero.
SAL, NOM y PRO: variables de tipo real. */

int main()
{
    int I = 0;
    float SAL, PRO, NOM = 0;
    printf("Ingrese el salario del profesor:\t");
    /* Observa que al menos sse necesita ingresar el salario de un profesor para  que no ocurra en error de ejecucuion del programa. */
    scanf("%f", &SAL);
    do
    {
        NOM = NOM + SAL;
        I = I + 1;
        printf("Infrese el salario del profesor -0 para terminar- :\t");
        scanf("%f", &SAL);
    }
    while (SAL);
    PRO = NOM / I;
    printf("\nNomina: %.2f \t promedio de salarios: %.2f", NOM, PRO);
    return 0;
}
