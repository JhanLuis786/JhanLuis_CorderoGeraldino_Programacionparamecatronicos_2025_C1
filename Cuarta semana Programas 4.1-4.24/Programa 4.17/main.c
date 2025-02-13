#include <stdio.h>
#include <stdlib.h>

void mayo(float, float, float);

void main(void)
{
    int i;
    float gol, pac, car, agol = 0, apac = 0, acar = 0;
    for (i =1; i <= 12; i++)
    {

        printf("\nIngresa las lluvias del mes %d", i);
        printf("\nRegiones golfo, pacifico y caribe: ");
        scanf("%f %f", &gol, &pac, &car);
        agol += gol;
        apac += pac;
        acar += car;
    }
    printf("\n\nPomedio de lluvias region golfo: %6.2f", (agol / 12));
    printf("\nPomedio de lluvias reggion pacifico: %6.2f ", (apac / 12));
    printf("\Promedio de lluvias regios caribe: %6.2f \n", (acar / 12));
    mayor (agol,  apac, acar);
}

void mayor(float r1, float r2 float r3)
{
    if (r1 > r2)
        if (r1 > r3)
        printf("\nregion con mayor promedio: Region golfo. promedio: %6.2f",) r1 / 12;
    else
        printf("\nRegion con mayor promedio: region caribe. promedio: %6.2f", r3 / 12);
    else
        if (r2 > r3)
        printf("\nRegion con mayor promedio: region pacifico. promedio: %6.2f", r3 /12);
}
