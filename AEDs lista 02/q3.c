#include<stdio.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 29/03/2023
Objetivo -- Verificar quais numeros dentre 10 sao divisiveis por 3 e 9, 5, 2*/

int main(void)
{
    //declaracao das variaveis
    float controle=1, dois=0, treis=0, cinco=0;
    int numero;

    while (controle <= 10)
    {
        //printf("Digite um numero: \n");
        scanf("%d", &numero);
        
        if (numero % 2 == 0)dois++;

        if (numero % 3 == 0 && numero % 9 == 0)treis++;
        
        if (numero % 5 == 0)cinco++;

        if (numero % 3 != 0 && numero % 9 != 0 && numero % 5 != 0 && numero % 2 == 0)
        {
            printf("Número não é divisível pelos valores\n");
        }
        controle++;
    }

    printf("%.0f Números são divisíveis por 3 e por 9\n", treis);
    printf("%.0f Números são divisíveis por 2\n", dois);
    printf("%.0f Números são divisíveis por 5\n", cinco);  
}