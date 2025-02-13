#include <stdio.h>
#include <stdlib.h>

/*Cubo-1.
El programa calcula el cubo de los 10 primeros numeros naturales con la ayuda de una funcion. En la solucionn del problema se utiliza una vatuable globas, aunque esta como veremos mas adelante noes muy recomendable. */

int cubo (void); //prototipo de funcion
int I; //variable global

int main()
{
    int CUB;
    for (I = 1; I <= 8; I++)
    {
        CUB = cubo(); //llamada a las funcion cubo
        printf("\nEl cubo de %d es: %d", I, CUB);
    }

}
int cubo(void) //declaracion de la funcion
//la funcion calcula el cubo de la variable global I.
{
    return (I*I*I);
}
