#include <stdio.h>
#include <stdlib.h>


/*
Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 29/05/2023
Objetivo -- Salvar e printar numeros salvos em um vetor usando ponteiro
*/


void preencherVetor(int *vetor, int N)
{
    for (int i = 0; i < N; i++)
    {
        scanf("%d", (vetor + i));
    }
}
void printaElementos(int *vetor, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Elemento - %d: %d\n", i, *(vetor + i));
    }
}

int main(void)
{
    int N;
    printf("Digite a quandidade de que deseja armazenar\n");
    scanf("%d", &N);

    int *vetor = (int *)malloc(N * sizeof(int));

    preencherVetor(vetor, N);
    printaElementos(vetor, N);
    

    free(vetor);
    return 0;
}