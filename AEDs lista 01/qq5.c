#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 16/03/2023
objetivo - Arrecadacao de um hotel*/

int main(void)
{
    //atribuicao das variaveis
    float diaria, diariaP, valor, valorP, diferenca;

    //atribuicao dos valor
    //printf("Digite o valor da diaria: \n");
    scanf("%f", &diaria);

    //operacoes matematicas

    diariaP = diaria * 75/100;
    valorP = 80 * 80/100 * diariaP;
    valor = 80 * 50/100 * diaria;


    //estrutura de condicao

    if (valorP < valor)
    {
        diferenca = valor - valorP;
    } 
    else 
    {
        diferenca = valorP - valor;
    }

    //saida dos resultadoss
    printf("Valor promocional: %.2f\n", diariaP);
    printf("Promocional com 80%% ocupado: %.2f\n", valorP);
    printf("Normal com 50%% ocupado: %.2f\n", valor);
    printf("Diferença entre os valores: %.2f\n", diferenca);

    return 0;
}