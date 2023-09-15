#include <stdio.h>

int main()
{
    double raio;
    scanf("%lf", &raio);
    
    double n = 3.14159;
    double area = n * (raio*raio);
    printf("A=%.4lf\n", area);
 
    return 0;
}
