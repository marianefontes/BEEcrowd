#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linha, coluna;

    while (scanf("%d %d", &linha, &coluna) != EOF)
    {
        int **tabuleiro = (int**) calloc(linha, sizeof(int));

        for (int i = 0; i < linha; i++) 
        {
            tabuleiro[i] = (int*) calloc(coluna, sizeof(int));
        }

        for (int i = 0; i < linha; i++)
        {
            for (int j = 0; j < coluna; j++)
            {
                scanf("%d", &tabuleiro[i][j]);
            }
        }

        for (int i=0;i<linha;i++)
        {
            for (int j=0;j<coluna;j++)
            {
                if (tabuleiro[i][j]) {
                    printf("9");
                } else {
                    int contador = 0;
                    if(i > 0) {
                        contador += tabuleiro[i-1][j];
                    }
                    if (j > 0) {
                        contador += tabuleiro[i][j-1];
                    }
                    if (i != linha-1) {
                        contador += tabuleiro[i+1][j];
                    }
                    if (j != coluna-1) {
                        contador += tabuleiro[i][j+1];
                    }
                    printf("%d", contador);
                }
            }
            printf("\n");
        }

        for (int i=0;i<linha;i++)
        {
            free(tabuleiro[i]);
        }
    }
    return 0;
}
