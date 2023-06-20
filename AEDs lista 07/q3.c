#include<stdio.h>
#include<stdlib.h>

/*
Autor - Matheus Fagundes
Ultima Atualizacao - 29/05/2023
Objetivo - Verificar o maior numero de um vetor alocado dinamicamente
*/
void preencheVetor(int* vetor, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (vetor+i));
    }
}
void achaMaior(int* vetor, int N)
{
    int maior;
    maior = *vetor;
    

    for (int i = 0; i < N; i++)
    {
        if (*(vetor+i) > maior) maior = *(vetor+i);
    }
    printf("%d", maior);
    
}
int main(void)
{
    int N;
    int* vetor= (int*)malloc(N * sizeof(int));

    
    printf("Digite o numero total de elementos (1 a 100): ");
    scanf("%d", &N);

    preencheVetor(vetor, N);
    achaMaior(vetor, N);


    free(vetor);
    return 0;
}