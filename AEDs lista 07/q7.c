#include<stdio.h>
#include<stdlib.h>

/*
Autor - Matheus Fagundes
Ultima atualizacao - 29/05/2023
Objetivo - Mostrar a ordem inversa do vetor
*/
void preencheVetor(int* vetor, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (vetor+i));
    }
}

void printaInverso(int* vetor, int n)
{
    for (int i = (n-1); i >= 0; i--)
    {
        printf("Elemento - %d: %d\n", i, *(vetor+i));
    }
    
}
int main(void)
{
    int n;

    printf("Insira o numero de elementos a serem armazenados no veotr (max 10): ");
    scanf("%d", &n);

    int* vetor = (int*)malloc(n * sizeof(int));

    preencheVetor(vetor, n);
    printaInverso(vetor, n);


    free(vetor);
    return 0;
}