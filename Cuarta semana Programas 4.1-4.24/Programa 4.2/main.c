#include <stdio.h>
#include <stdlib.h>

//cubo 2
//el programa calcula el cubo dellos 10 primeros numeros naturales con la ayuda de una fincion.

int cubo(void); //prototipo de la funcion
int I; //variable global

void main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo(); //llamada a la funcion cubo.
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}

int cubo(void) //declaracion de la funcion
//la funcion clacula el cubo de la varible goblas I.
{
    int I = 2; //carableloca entera I con el mismo nobre que la variable global.
    return (I*I*I);
}
