#include<stdio.h>
 /*Autor -- Matheus Fagundes Araujo
 Ultima Atualizacao -- 17/03/2023
 Objetivo - azer um programa para:
• ler um símbolo do teclado;
• identificar com a estrutura SWITCH e mostrar as seguintes mensagens, segundo o caso:
– "SINAL DE MENOR"
– "SINAL DE MAIOR"
– "SINAL DE IGUAL"
– "OUTRO SINAL"*/

int main(void)
{
    //declaracao das variaveis
    char opcao;

    //atribuicao de valor
    scanf(" %s", &opcao);

    //estrutura de condicao
    switch (opcao)
    {
    case '<':
        printf("SINAL DE MENOR:\n");
        break;
    case '>':
        printf("SINAL DE MAIOR:\n");
        break;
    case '=':
        printf("SINAL DE IGUAL\n");
        break;
    default: printf ("OUTRO SINAL");
        break;
    }
}
