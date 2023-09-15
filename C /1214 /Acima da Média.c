#include <stdio.h>

float media(int numAlunos, float notas[]);

int main(void)
{
    int numSalas;
    scanf("%i", &numSalas); 

    float porcentagem[numSalas];

    for (int i = 0; i < numSalas; i++)
    {
        int numAlunos;
        scanf("%i", &numAlunos);
        float notas[numAlunos];

        for (int j = 0; j < numAlunos; j++)
        {
            scanf("%f", &notas[j]);
        }
        porcentagem[i] = media(numAlunos, notas);
    }

    for (int i = 0; i < numSalas; i++)
    {
        printf("%.3f%%\n", porcentagem[i]);
    }
    return 0;
}
 
float media(int numAlunos, float notas[])
{
    float media = 0;
    int soma = 0;
    float acimaMedia = 0;

    for(int j = 0; j < numAlunos; j++)
    {
        soma = soma + notas[j];
    } 
    
    media = soma/numAlunos;

    for (int i = 0; i < numAlunos; i++)
    {
        if (notas[i] > media) {
            acimaMedia++;
        }
    }
    return acimaMedia*100/numAlunos;
}
