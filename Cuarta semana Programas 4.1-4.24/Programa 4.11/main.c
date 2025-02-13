#include <stdio.h>
#include <stdlib.h>

int mad(int);
void main(void)
{
    int num, res;
    printf("\nIngresa elnimero: ");
    scaf("%d", &num);
    res = mad(num);
    printf("\nEl mayordevisor de %d es: %d, num, res");
}

int mad(int n1)
{
    int i = (n1 / 2);
    while (n1 % i)
        i--;
    return i;
}
