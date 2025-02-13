#include <stdio.h>
#include <stdlib.h>

int productoria(int);

void main(void)
{
    int num;
    do
    {
        printf("Ingresa el nimero del cual quieres valcular la productoria: ");
        scanf("%d", &num);
    }
    while (num >100 || num < 1);
    printf("\nla productora e %d es: %d", num, productoria);
}

int productoria(int n)
{
    int i, pro = 1;
    for (i = 1; i <= n; i++)
        pro *= i;
    return (pro);
}
