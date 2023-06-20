#include<stdio.h>
#include<stdlib.h>

/*
Autor - Matheus Fagundes
Ultima Atualizaco 29/05/2023
Objetivo - Somar valores de um vetor
*/

void preencheVetor(int* vetor, int N)
{
    for (int i = 0; i < N; i++)
    {
        scanf("%d", (vetor+i));
    }
}

int somaValores(int* vetor, int n)
{
    int soma=0;
    for (int i = 0; i < n; i++)
    {
        soma += *(vetor+i);
    }
    return soma;
}

int main(void)
{
    int N;


    printf("Insira o numero de elementos a serem armazenados no veotr (max 10): ");
    scanf("%d", &N);

    int* vetor = (int*)malloc(N * sizeof(int));

    preencheVetor(vetor, N);
    printf("A soma do vetor e: %d", somaValores(vetor, N));

    free(vetor);
    return 0;

}