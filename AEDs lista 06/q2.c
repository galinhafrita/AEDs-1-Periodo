#include<stdio.h>
#include<stdlib.h>
/*
Autor -- Matheus Fagundes
Ultima atualizacao -- 18/05/2023
Objetivo -- Preencher um vetor de 10 e copiar os negativos em outro vetor
*/

void preencheVetor(int vetor[10])
{
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
}
int* vetorNegativo(int vetor[10], int* novoTam)
{
    int quantVetor=0;
    for (int i = 0; i < 10; i++)
    {
        if(vetor[i] < 0) quantVetor++;
    }

    *novoTam = quantVetor;

    int* novoVetor = (int*)malloc(quantVetor * sizeof(int));
    
    int contador=0;
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] < 0)
        {
            novoVetor[contador] = vetor[i];
            contador++;
        }
    }
        return novoVetor;

}

    int main(void)
    {
        int vetor[10], quant=0;
        int* poteiroVetor;

        preencheVetor(vetor);

        poteiroVetor = vetorNegativo(vetor, &quant);

        for (int i = 0; i < quant; i++)
        {
            printf("%d", (poteiroVetor[i]));
        }
        
        free(poteiroVetor);
    }
    
    