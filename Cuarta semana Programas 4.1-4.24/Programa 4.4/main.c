#include <stdio.h>
#include <stdlib.h>

//pruba de variables globales, locales y estaticas.
//el progeama utiliza funciones en las que se usan diferentesn tipos de variables.

int f1(void);
int f2(void);
int f3(void);
int f3(void);
int f4(void);

int K = 3;

void main(void)
{
    int I;
    for (I = 1; I <= 3; I ++)
    {
        printf("\nEl resultado de la funcion f1 es: %d", f1());
        printf("\nEl resultado de la funcion f2 es: %d", f2());
        printf("\nEl resultado de la funcion f3 es: %d", f3());
        printf("\nEl resultado de la funcion f4 es: %d", f4());
}
}
int f1(void)
//la funcion f1 utiliza la variable global
{
    K += K;
    return (K);
}
int f2(void)
//la funcion f2 utiliza la variable local
{
    int K = 1;
    K++;
    return(K);
}
int f3(void)
//la funcion f3 utiliza la variable estatica
{
    static int K = 8;
    K += 2;
    return (K);
}
int f4(void)
//la funcion f4 utiliza dos variables con el mismo nombre
{
    int K = 5;
    K = K + ::K; //uso de la variable local y global
    return (K);
}
