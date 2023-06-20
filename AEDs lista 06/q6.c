#include<stdio.h>

/*
Autor -- Matheus Fagundes
Ultima Atualizacao -- 18/05/2023
Objetivo -- 
*/

void preencheVetor(int matriz[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        
    }
    
}
void somaDiagonal(int matriz[4][4])
{

    int somaDiag=0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(i == j) 
            {

            somaDiag += matriz[i][j];
            printf("\n numeros: %d\n", matriz[i][j]);

            }
        }
        
    }
    printf("%d\n", somaDiag);
}

int main(void)
{
    int matriz[4][4];

    preencheVetor(matriz);
    somaDiagonal(matriz);
}

