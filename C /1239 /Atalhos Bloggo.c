#include <stdio.h>
#include <string.h>

int main()
{
  int tamanho, conti=0, contb=0;
  char texto[51];
 
  while (fgets(texto, 51, stdin))
  {
    tamanho = strlen(texto);
    for (int i = 0; i < tamanho; i++)
    {
        if (texto[i] == '_') {
            if (conti == 0) {
                printf("<i>");
                conti = 1;
            } else {
                printf("</i>");
                conti = 0;
            } 
        } else if (texto[i] == '*') {
            if (contb == 0) {
                printf("<b>");
                contb = 1;
            } else {
                printf("</b>");
                contb = 0;
            }
            
        } else {
            printf("%c", texto[i]);
        }
    }
}
    return 0;
}
