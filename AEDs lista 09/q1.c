#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Autor - Matheus Fagundes Araujo
Ultima atualizacao - 31/05/2023
Objetivo - Informar as iniciais do nome digitado
*/

void preencheNome(char *nome)
{
    scanf("%[^\n]", nome);
}

void printarIniciais(char *nome, int numero)
{
    int i = 0;
    for (i = 0; i <= numero; i++)
    {
        if (*(nome + i) >= 'A' && *(nome + i) <= 'Z')
        {
            printf("%c", *(nome + i));
        }
    }
}

int main(void)
{
    int numero;                                     // declaracao da quantidade alocada em um vetor
    char *nome = (char *)malloc(20 * sizeof(char)); // declaracao dinamica da string q armazenara o nome

    preencheNome(nome);    // funcao que preenche o nome do vetor declarado
    numero = strlen(nome); // contador da quantidade de caracters do nome digitado

    char *nomeContado = (char *)malloc(numero * sizeof(char)); // declaracao dinamica da string q armazenara o nome com a quantidade exata de caracters digitados

    strcpy(nomeContado, nome); // copia o que foi digitado em nome dentro do nomeContado, que possui a quantidade exata de caracters digitados pelo usuario

    printarIniciais(nomeContado, numero); // printa as inicias do nome digitado com precisao

    free(nome);
    free(nomeContado);
    return 0;
}