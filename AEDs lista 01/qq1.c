#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 15/03/2023
Objetivo - Mostrar o meior numero*/

int main(void)
{
    //declaracao das variaveis
    float n1, n2;

    //atribuicao dos valores
    //printf("Digite o valor dos numeros que deseja comparar:\n");
    scanf("%f %f", &n1, &n2);

    //operadores condicionais
    if (n1 > n2)
    {
        printf("%.0f", n1);
    }
    else
    {
        printf("%.0f", n2);
    }
}