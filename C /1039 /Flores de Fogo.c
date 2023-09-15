#include <stdio.h>
#include <math.h>

typedef struct instancias
{
    int r;
    int x;
    int y;
}instancias;

int circulos(instancias cacador, instancias flor)
{
    double distance = sqrt(pow(flor.x - cacador.x, 2) + pow(flor.y - cacador.y, 2));
    return (cacador.r >= flor.r && distance + flor.r <= cacador.r);
}

int main()
{
    instancias cacador, flor;
    while (scanf("%d %d %d %d %d %d", &cacador.r, &cacador.x, &cacador.y, &flor.r, &flor.x, &flor.y) != EOF)
    {
        if (circulos(cacador, flor)) {
            printf("RICO\n");
        } else {
            printf("MORTO\n");
        }
    }
    return 0;
}
