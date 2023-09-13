#include <stdio.h>
#include <string.h>

int main()
{
    int numCasos, pessoasNoGrupo, contador = 0;
    scanf("%i", &numCasos);
    char idiomaNativo[21], ingles[21];
    
    while (numCasos--)
    {
        scanf("%i", &pessoasNoGrupo);

            for (int j = 0; j < pessoasNoGrupo; j++)
            {
                scanf("%s", idiomaNativo);

                if (strcmp(idiomaNativo, ingles) != 0) {
                    contador++;
                }
                strcpy(ingles, idiomaNativo);
                idiomaNativo[0] = '\0';
            }

            if(contador > 1) {
                contador = 0;
                printf("ingles\n");
            } else {
                printf("%s\n", ingles);
            }
            contador = 0;
    }     
    return 0;
}
