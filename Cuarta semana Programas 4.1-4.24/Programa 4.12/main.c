#include <stdio.h>
#include <stdlib.h>

int mcd(int, int);

void main(void)
{
    int nu1, nu2, res;
    printf("\nIngresa los dos numeros enteros: ");
    scanf("%d %d", &nu1, &nu2);
    printf("\nEl maximo comun divisor de %d y %d es: ", nu1, nu2, res);
}

int mcd(int n1, int n2)
{
    int i;
    if (n1 < n2)
        i = n1 / 2;
    else
        i = n2 / 2;
    while((n1 % i) || (n2 % i))
        i--;
    return i;
}
