#include <stdio.h>
#include <stdlib.h>

int z, y;

int f1(float);
void f2(float, int *);

void main(void)
{
    int w;
    float x;
    z = 5;
    y = 7;
    w = 2;
    x = (float)y  / z;
    printf("\nprograma principal: %d %d %.2f %d", z, y, x, w);
}
int f1(float x)
{
    int k;
    if (x!=0)
    {
        k = z - y;
        x++;
    }
    else
        k = z + y;
    printf("\nf1: %d %d %.2f %d", z, y, x, k);
}
void f2(float t, int *r)
{
    int y;
    y = 5;
    z = 0;

    printf("\nf2: %d %d %.2f %d", z, y, t, *r);
    if (z == 0)
    {
        z = (*r) * 2;
        t = (float) z  / 3;
        printf("\nintgresa el valor: ");
        scanf("%d", r);
        printf("\nf2: %d %d %.2f %d", z, y, t, *r);
    }
    else
    {
        z = (*r) * 2;
        printf("\nf2: %d %d %.2f %d", z, y, t, *r);
    }
    *r = f1(t);
}
