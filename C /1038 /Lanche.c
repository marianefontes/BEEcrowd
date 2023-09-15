#include <stdio.h>
 
int main()
{
    int codigo, qtd;
    float preco;
    scanf("%d %d", &codigo, &qtd);
    
    if (codigo==1) {
        preco = qtd * 4.00;
    } else if (codigo==2) {
        preco = qtd * 4.50;
    } else if (codigo==3) {
        preco = qtd * 5.00;
    } else if (codigo==4) {
        preco = qtd * 2.00;
    } else {
        preco = qtd * 1.50;
    }
    
    printf("Total: R$ %.2f\n", preco);
    return 0;
}
