#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *data;
    int ultimaPosicao;
    int capacidade;
}validacao; 

void push(validacao *validacao, char c);
void pop(validacao *validacao);
void liberaMemoria(validacao *validacao);
validacao *alocacao(int capacidade);

int main()
{
    char expressao[1001];

    while (fgets(expressao, 1001, stdin) != NULL)
    {
        int len = strlen(expressao);
        validacao *pilha = alocacao(len);

        int validacao = 0;

        for (int i = 0; i < len; i++)
        {
            if (expressao[i] == '(') {
                push(pilha, '(');
            } else if (expressao[i] == ')') {
                if (pilha->ultimaPosicao == -1) {
                    validacao = 1;
                    break;
                }
                pop(pilha);
            }
        }
        if (validacao == 0 && pilha->ultimaPosicao == -1) {
            printf("correct\n");
        } else {
            printf("incorrect\n");
        }
        liberaMemoria(pilha);
    }
    return 0;
}

void push(validacao *validacao, char c)
{
    if (validacao->ultimaPosicao == validacao->capacidade - 1) {
        fprintf(stderr, "validacao overflow\n");
        exit(1);
    }
    validacao->ultimaPosicao++;
    validacao->data[validacao->ultimaPosicao] = c;
}

void pop(validacao *validacao)
{
    if (validacao->ultimaPosicao == -1) {
        fprintf(stderr, "validacao underflow\n");
        exit(1);
    }
    validacao->ultimaPosicao--;
}

void liberaMemoria(validacao *validacao)
{
    free(validacao->data);
    free(validacao);
}

validacao *alocacao(int capacidade)
{
    validacao *validacao = malloc(sizeof(validacao));
    validacao->data = malloc(capacidade * sizeof(char));
    validacao->ultimaPosicao = -1;
    validacao->capacidade = capacidade;
    return validacao;
}
