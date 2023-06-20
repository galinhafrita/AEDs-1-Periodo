#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Última atualização -- 12/03/2022
Objetivo - Conversor de KW pra real*/

int main(void){


//Declaração de variáveis
    float salarioMin, qtKw, valorPag, valorKw, valorDesc;

//Leitura dos números
    //printf("Digite o salario mínimo: \n", salarioMin);
    scanf("%f", &salarioMin);
    //printf("Digite o quanto sua residencia gasta de energia em KW: \n");
    scanf("%f", &qtKw);

// Operacoes matematicas

valorPag = qtKw/100 * salarioMin/7;
valorKw = valorPag/qtKw;
valorDesc = valorPag * 90/100;

//Exibicao dos resultados
printf("Valor do Kw: %.2f\n", valorKw);
printf("Valor a pagar: %.2f\n", valorPag);
printf("Valor com desconto: %.2f\n", valorDesc);

return 0;

}