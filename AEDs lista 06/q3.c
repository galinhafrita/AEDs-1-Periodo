#include<stdio.h>
#include<stdlib.h>

/*
Nome -- Matheus Fagundes
Ultima atualizacao -- 18/05/2023
Objetivo -- Criar varios procedimentos que intercala conteido de 2 vetores
*/

void preencheVetores(int vetorX[10], int vetorY[10])
{
    printf("Dite os valores do vetor X\n");
    
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorX[i]);
    }
    printf("Dite os valores do vetor X\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetorY[i]);
    }
    
}

void vetorIntercalado(int vetorX[10], int vetorY[10], int vetorXY[20])
{
    int contador=0;

    for (int i = 0; i < 20; i++)
    {
        vetorXY[contador] = vetorX[i];
        contador++;
        vetorXY[contador] = vetorY[i];
        contador++;
    }
    
}
void exibeConteudo(int vetorXY[20])
{
    for (int i = 0; i < 20; i++)
    {
        printf("%d", vetorXY[i]);
    }
    
}

int main(void)
{
    int vetorX[10], vetorY[10], vetorXY[20];

    preencheVetores(vetorX, vetorY);
    vetorIntercalado(vetorX, vetorY, vetorXY);
    exibeConteudo(vetorXY);
}