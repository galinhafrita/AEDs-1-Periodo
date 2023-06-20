#include <stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima Atualizacao - 16/03/2023
Objetivo - Calculo de aumento salarial*/

int main(void)
{
    // aturibuicao das variaveis
    float salarioI, salario;
    char opcao;

    // Atribuicao de valor
    //printf("Digite A para aumentar 8%% e B para aumentar 11%% e C para um aumento fixo: \n");
    scanf(" %s", &opcao);
    //printf("Digite o valor do seu salario: \n");
    scanf("%f", &salarioI);

    //estrutura de condicao
    switch (opcao)
    {
    case 'A':
        salario = salarioI + salarioI * 8 / 100; 
        printf("%.2f", salario);
        break;
    case 'B':
        salario = salarioI + salarioI * 11 / 100; 
        printf("%.2f", salario);
        break;
    case 'C':
        if (salario > 1000)
        {
            printf("%.2f", (salarioI + 200));
        }
        else
        {
            printf("%.2f", (salarioI + 350));
        }
        break;
    default: printf("erro");
        break;
    }

}
 