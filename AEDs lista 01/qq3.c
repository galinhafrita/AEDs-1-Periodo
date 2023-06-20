#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 15/03/2023
Objetivo - calcular idade*/

int main(void)
{
    //atribuicao das variaveis
    float idade, anoNas;
    char opcao;

    //atribuicao dos valores
    //printf("digite o ano em que nasceu: \n");
    scanf("%f", &anoNas);
    //printf("Voce ja fez aniversario esse ano? S-para Sim e N-para Nao\n");
    scanf(" %c", &opcao);

    //operador condicional
    if (opcao == 'S')
    {
        idade = 2023 - anoNas;
        if (idade >= 18)
        {
            printf("%.0f \n", idade);            
            printf("Pode dirigir");
        }
        else if (idade < 18)
        {
            printf("%.0f \n", idade);  
            printf("Não pode dirigir");
        }
    }
    else if (opcao == 'N')
    {
        idade = 2023 - anoNas - 1;
        if (idade >= 18)
        {
            printf("%.0f \n", idade);   
            printf("Pode dirigir");
        }
        else if (idade < 18)
        {
            printf("%.0f \n", idade);   
            printf("Não pode dirigir");
        }
    }
    
}