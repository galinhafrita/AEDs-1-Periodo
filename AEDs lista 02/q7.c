#include<stdio.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 30/03/2023
Objetivo -- Calcular a sequencia de fibonacci*/

int main(void)
{
    //delcaracao das variaveis
    float anterior = 0, atual = 1, proximo, n, i;

    //Atribuicao de N
    //printf("Digite o número de termos da sequência de Fibonacci: ");
    scanf("%f", &n);

    //printf("Sequência de Fibonacci:\n");
    for(i = 0; i < n; i++) 
    {
        printf("%.0f ", atual);
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }
    return 0;
}

