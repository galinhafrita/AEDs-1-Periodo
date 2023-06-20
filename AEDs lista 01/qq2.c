#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 15/03/2023
Objetivo - soma de numeros*/

int main(void)
{
    //declaracao das variaveis
    float n1, n2;

    //atribuicao dos valores
    //printf("Digite dois numeros: \n");
    scanf("%f %f", &n1, &n2);

    //operador condicional
    if(n1 + n2 >= 10)
    {
        printf("%.0f",(n1 + n2 + 5));
    }
    else
    {
        printf("%.0f", (n1 + n2 + 7));
    }
}