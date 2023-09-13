#include <stdio.h>
#include <math.h>

int Rafael(int x, int y);
int Beto(int x, int y);
int Carlos(int x, int y);
    
int main(void)
{
    int N, x, y;
    scanf("%i", &N);
    
    for (int i = 0; i < N; i++)
    {
        scanf("%i %i", &x, &y);
     
    if (Rafael(x, y) > Beto(x, y) && Rafael(x, y) > Carlos(x, y)) {
        printf("Rafael ganhou\n");
    } else if (Beto(x, y) > Rafael(x, y) && Beto(x, y) > Carlos(x, y)) {
        printf("Beto ganhou\n");
    } else {
        printf("Carlos ganhou\n");
           }
    }
    return 0;
}


int Rafael (int x, int y)
{
    int resultado = 0;
    resultado = pow(3*x,2) + pow(y, 2);
    return resultado;
}

int Beto (int x, int y)
{
    int resultado = 0;
    resultado = 2*pow(x, 2) + pow(5*y, 2);
    return resultado;
}

int Carlos (int x, int y)
{
    int resultado = 0;
    resultado = -100*x + pow(y, 3);
    return resultado;
}

