#include<stdio.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 30/03/2023
Objetivo -- Calcular a sequencia de fibonacci menor q a antrada*/

int main(void)
{
    //delcaracao das variaveis
    int n, i;
    int anterior = 0, atual = 1, proximo;

    //Atribuicao de N
    //printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%d", &n);

    //printf("Sequência de Fibonacci:\n");

    for(i = 0; i < n; i++)
    {
        if (atual < n && atual > 0)
        {
        printf("%d ", atual);
        }
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    return 0;
}