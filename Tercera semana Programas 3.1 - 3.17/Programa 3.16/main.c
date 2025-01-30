#include <stdio.h>
#include <stdlib.h>

/* Calificaciones.
El proramam al recibir un grupo de calificaciones de im alimno obtiene el promedio de calificaciones de cada uno de ellos u, ademas, los alummnos con el meor y pero promedio.

I, MAT, MAMAT y MEMAT; cariables de tipo entero.
CAL, SUM, MAPRO, MEPRO y PRO: variables de tipo real. */

int main()
{
    int I, MAT, MAMAT, MEMAT;
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;
    printf("Infrese la matricula del primer alumno:\t");
    scanf("%d", &MAT);
    while (MAT)
    {
        SUM = 0;
        for (I = 1; I<= 5; I++)
        {
            printf("\tIngrese la calificaicon del alumno: ", I);
            scanf("%f", &CAL);
        }
        PRO = SUM / 5;
        printf("\nMatricula:%d \tPromedio:%5.2f", MAT, PRO);
        if (PRO > MAPRO)
        {
            MAPRO = PRO;
            MAMAT = MAT;
        }
        if (PRO < MEPRO)
        {
            MEPRO = PRO;
            MEMAT = MAT;
        }
        printf("\\Ingrese la matricula del siguiente alunmo: ");
        scanf("%d", &MAT);
    }
    printf("\n\nAlumno con mejor promedio: \t%d\t\%5.2f", MAMAT, MAPRO);
    printf("\n\nAlumno con peor promedio: \t%d\t\%5.2f", MEMAT, MEPRO);
    return 0;
}
