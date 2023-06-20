#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 12/03/2023
Objetivo - Mostrar o decimo termo de uma PA*/

int main(void){

    //Declaracao de variaveis
    float rasao, frst, n10;

    //leitura dos numeros
    //printf("Digite a rasao e o primeiro numero da PA:\n");
    scanf("%f %f", &rasao, &frst);

    //operacoes matematicas
    n10 = frst + (10 - 1) *rasao;

    //Exibicao do resultado
    printf("%.0f", n10);




}
