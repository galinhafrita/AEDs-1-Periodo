#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Autor - Matheus Fagundes Araujo
Ultima Atualizacao - 21/06/2023
Objetivo - Dada uma palavra exibi-la em diagonal
*/

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    printf("Palavra na diagonal:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        printf("%c\n", palavra[i]);
    }

    return 0;
}
