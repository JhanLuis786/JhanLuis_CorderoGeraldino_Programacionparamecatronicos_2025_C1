#include <stdio.h>
#include <stdlib.h>

void rango(int);

int ra1 = 0;
int ra2 = 0;
int ra3 = 0;
int ra4 = 0;
int ra5 = 0;

void main(void)
{
    float cal;
    printf("Ingresa ela primera calificacion del alumno: ");
    scaf("%f", &cal);
    while (cal != -1)
    {
        rango(cal);
        printf("Ingresa la siuiente calificacio del alumno: ");
    }
    printf("\n0..3.99 = %d", ra1);
    printf("\n4..5.99 = %d", ra2);
    printf("\n6..7.99 = %d", ra3);
    printf("\n8..8.99 = %d", ra4);
    pritnf("\n9.10 = %d", ra5);
}
void rango(int val)
{
    if (val < 4)
    ra1++;
        else
        if (val < 6)
        ra2++;
    else
        if (val < 8)
        ra3++;
    else
        if (val < 9)
        ra4++;
    else
        ra5++;
}
