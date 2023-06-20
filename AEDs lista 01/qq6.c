#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 16/03/2023
Objetico - Calcular equacao*/

int main(void)
{
    //atribuicao das variaveis
    float a, b, x;

    //atribuicao dos valores
    //printf("Digite o valor de a e b: \n");
    scanf("%f %f", &a, &b);

    x = -b/a;

    printf("%.2f", x);
}