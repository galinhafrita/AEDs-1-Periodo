#include<stdio.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 30/03/2023
Objetivo -- Calcular o numero S*/

int main(void)
{
    //delcaracao das variaveis
    float n, s=1, numerador=2;

    //atribuicao do valor n
    //printf("Digite o valor de N: \n");
    scanf("%f", &n);

    while(n >= numerador)
    {
        s = s + 1/numerador;
        numerador++;
    }
    printf ("%.2f\n", s);
}