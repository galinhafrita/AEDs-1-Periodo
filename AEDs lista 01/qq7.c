#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima Autalizacao -- 16/03/2023
Objetivo - Calcular uma funcao*/

int main(void)
{
    //declaracao das variaveis
    float x;

    //opercaoes matematicas


    //atribuicao dos valores
    //printf("digite o valor de X: \n");
    scanf("%f", &x);

    //estrutura condicional
    if (x <= 1)
    {
        printf("1");
    }
    else if (x < 1 && x >=2)
    {
        printf("2");
    }
    else if (x > 2 && x <=3)
    {
        printf("%.2f", (x * x));
    }
    else if (x > 3)
    {
        printf("%.2f", (x * x * x));
    }

    return 0;
}