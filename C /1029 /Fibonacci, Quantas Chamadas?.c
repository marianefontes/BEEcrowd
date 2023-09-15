#include <stdio.h>
#include <stdlib.h>

int fib(int m, int* contador);
int fibAuxiliar(int n, int* contador);

int main() 
{
    int num, m, resultado;
    scanf("%d", &num);

    for(int i = 0; i < num; i++)
    {
        int contador = 0;
        scanf("%d", &m);
        resultado = fib(m, &contador);
        printf("fib(%d) = %d calls = %d\n", m, contador - 1, resultado);
    }

    return 0;
}

int fib(int m, int* contador) 
{
    return fibAuxiliar(m, contador);
}

int fibAuxiliar(int n, int* contador) 
{
    (*contador)++;
    
    if (n <= 1) {
        return n;
    }
    return fibAuxiliar(n - 1, contador) + fibAuxiliar(n - 2, contador);
}
