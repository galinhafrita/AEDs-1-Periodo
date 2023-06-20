#include <stdio.h>
#include <stdlib.h>

/*
Autor -- Matheus Fagundes
Ultima Atualizacao -- 18/05/2023
Objetivo -- calculos usando matris
*/

void preencheMatriz(int matriz[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int somaLinha4(int matriz[5][5])
{
    int somaLinha = 0;

    for (int i = 0; i < 5; i++)
    {
        somaLinha += matriz[3][i];
    }
    return somaLinha;
}
int somaCol2(int matriz[5][5])
{
    int somaCol = 0;

    for (int i = 0; i < 5; i++)
    {
        somaCol += matriz[i][1];
    }

    return somaCol;
}
int somaDiagPrinc(int matriz[5][5])
{

    int somaDiag = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                somaDiag += matriz[i][j];
            }
        }
    }
    return somaDiag;
}
int somaDiagSec(int matriz[5][5])
{

    int somaDiagSec = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i + j == 4)
            {
                somaDiagSec += matriz[i][j];
            }
        }
    }
    return somaDiagSec;
}
int somaElementosMatriz(int matriz[5][5])
{

    int soma=0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main(void)
{
    int matriz[5][5];

    preencheMatriz(matriz);

    printf("A soma da linha 4 e: %d\n", somaLinha4(matriz));
    printf("A soma da coluna 2 e: %d\n", somaCol2(matriz));
    printf("A soma da diagonal principal e: %d\n", somaDiagPrinc(matriz));
    printf("A soma da diagonal secundaria e: %d\n", somaDiagSec(matriz));
    printf("A soma de todos elementos e: %d\n", somaElementosMatriz(matriz));

    for (int i = 0; i < 5; i++)
    {
        printf("\nlinha\n");
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", matriz[i][j]);
        }
    }

    return 0;
}
