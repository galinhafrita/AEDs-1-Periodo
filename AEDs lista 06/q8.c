#include<stdio.h>
#include<stdlib.h>

/*
Autor -- Matheus Fagundes
Ultima Atualizacao -- 25/05/2024
Objetivo -- Manipulacao de matriz 10x10
*/

void preencheMatriz(int vetor[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d", vetor[i][j]);
        }
        
    }    
}
void trocaLinha(int vetor[10][10], int n1, int n2);
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            vetor[n1][j] = vetor[n2][j];
        }
        
    } 
}
void trocaCol(int vetor[10][10], int n1, int n2);
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            vetor[i][n1] = vetor[i][n2];
        }
        
    } 
}
void trocaLinCol(int vetor[10][10], int n1, int n2);
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            vetor[n1][j] = vetor[i][n2];
        }
        
    } 
}
void trocaDiag(int vetor[10][10])
{

    int valor=0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(i == j) valor = vetor[i][j];
            if((i+j) == 10) vetor[i][j] = valor
        }
    } 
}

int main(void)
{
    int vetor[10][10];
    int l1=2, l2=8;
    int c1=4, c2=10;

    preencheMatriz(vetor);
    trocaLinha(vetor, l1, l2);
    trocaCol(vetor, c1, c2);
    trocaDiag(vetor);
    l1 = 5;
    c1 = 10;
    trocaLinCol(vetor, l1, c1);
}

