#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 12/02/2023
Objetivo - calcular o qunto termo de uma PG*/

int main(void){

    //declaracao de variaveis
    float rasao, frst, n5;

    //leitura dos numeros
    //printf("Digite a rasao e o primeiro numero de uma PG: \n");
    scanf("%f %f", &rasao, &frst);

    //operacoes matematicas
    n5 = frst * rasao * rasao * rasao * rasao;

    //Exibicao dos resultados
    printf("%.0f", n5);

    return 0;
}
