#include <stdio.h>

/*
Autor -- Matheus Fagundes
Ultima Atualizacao -- 18/05/2023
Objetivo -- Somar e subtrair 2 matrizes
*/

void preencheMatriz(int *matriz, int linha, int coluna)
{
    for (int numLinha = 0; numLinha < linha; numLinha++)
    {
        printf("Linha %d\n", numLinha);

        for (int numColuna = 0; numColuna < coluna; numColuna++)
        {
            printf("Valor: ");
            scanf("%d", (matriz + numLinha * coluna + numColuna));
        }
    }
}

int *calculaMatrizes(int *matrizA, int *matrizB, int linha, int coluna)
{
    int *matrizCFunc = (int *)malloc((linha * coluna) * sizeof(int));

    for (int numLinha = 0; numLinha < linha; numLinha++)
    {
        for (int numColuna = 0; numColuna < coluna; numColuna++)
        {
            *(matrizCFunc + numLinha * coluna + numColuna) = *(matrizA + numLinha * coluna + numColuna) - *(matrizB + numLinha * coluna + numColuna);
        }
    }
    return matrizCFunc;
}
int *calculaMatrizesSub(int *matrizA, int *matrizB, int linha, int coluna)
{
    int *matrizDFunc = (int *)malloc((linha * coluna) * sizeof(int));

    for (int numLinha = 0; numLinha < linha; numLinha++)
    {
        for (int numColuna = 0; numColuna < coluna; numColuna++)
        {

            *(matrizDFunc + numLinha * coluna + numColuna) = *(matrizA + numLinha * coluna + numColuna) - *(matrizB + numLinha * coluna + numColuna);
        }
    }
    return matrizDFunc;
}

int main(void)
{
    int linha = 4, coluna = 6;
    int *matrizA = (int *)malloc((linha * coluna) * sizeof(int));
    int *matrizB = (int *)malloc((linha * coluna) * sizeof(int));
    preencheMatriz(matrizA, linha, coluna);
    preencheMatriz(matrizB, linha, coluna);
    int *matrizC = calculaMatrizes(matrizA, matrizB, linha, coluna);
    int *matrizD = calculaMatrizesSub(matrizA, matrizB, linha, coluna);

printf("Matriz C:\n");
    for (int numLinha = 0; numLinha < linha; numLinha++)
    {
        for (int numColuna = 0; numColuna < coluna; numColuna++)
        {
            printf("%d ", *(matrizC + numLinha*coluna + numColuna));
        }
        printf("\n");
    }

    printf("Matriz D:\n");
    for (int numLinha = 0; numLinha < linha; numLinha++)
    {
        for (int numColuna = 0; numColuna < coluna; numColuna++)
        {
            printf("%d ", *(matrizD + numLinha*coluna + numColuna));
        }
        printf("\n");
    }

    free(matrizA);
    free(matrizB);
    free(matrizC);
    free(matrizD);

    return 0;
}