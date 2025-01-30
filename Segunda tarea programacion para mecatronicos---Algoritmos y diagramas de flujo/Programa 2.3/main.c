#include <stdio.h>
#include <stdlib.h>

/* Promedio del curso.
El programa, al recibir comodato el promedio de un alumno en un curso universitario, escribe aprobado si su promedio es mayor o igual a 6, o reprobado en caso contrario.

PRO: variable de tipo real. */

int main()
{
    float PRO;
    printf("Ingrese el promoedio del alumno: ");
    scanf(" %f", &PRO);
    if (PRO >= 6.0)
        printf("\nAprobado");
    else
        printf("\nReprobado");
    return 0;
}
