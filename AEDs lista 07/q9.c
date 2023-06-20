#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
Autor - Matheus Fagundes Araujo
Ultima atualizcao - 29/05/2023
Objetivo - inverter palavra usando vetor e matris
*/

int main(void)
{
    int controlador = 0, contador;
    char *palavra = (char *)malloc(50 * sizeof(char));
    char *palavraInvertida = (char *)malloc(50 * sizeof(char));

    scanf("%[^\n]", palavra);
    contador = strlen(palavra);

    while (strlen(palavra) > controlador)
    {
        *(palavraInvertida + controlador) = *(palavra + contador - 1);
        controlador++;
        contador--;
    }

    *(palavraInvertida + controlador) = '\0';

    printf("%s", palavraInvertida);

    free(palavra);
    free(palavraInvertida);

    return 0;
}