#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/*
Autor - Matheus Fagunde Araujo
Ultima Atualizacao - 29/05/2023
Objetivo - Contar a quantidade de vogais e consoantes
*/

int main(void)
{
    int volgal = 0, quant;
    char *palavra = (char *)malloc(100 * sizeof(char));

    // preenchimento do vetor

    scanf("%[^\n]", palavra);
    quant = strlen(palavra);

    for (int i = 0; i < quant; i++)
    {
        if (*(palavra + i) == 'a' || *(palavra + i) == 'e' || *(palavra + i) == 'i' || *(palavra + i) == 'o' || *(palavra + i) == 'u') volgal++;
    }

    printf("Numero de vogais: %d\n", volgal);
    printf("Numero de consoante: %d\n", (quant - volgal));
    printf("%d", quant);
    free(palavra);
    return 0;
}