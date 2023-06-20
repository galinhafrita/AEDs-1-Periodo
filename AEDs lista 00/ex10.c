#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
ultima atualizacao -- 12/03/2023
objetivo - transformar horas em minutos*/

int main(void){

    //declaracao da variavel
    float horas, minutos, minutos1;

    //leitura dos numeros
    //printf("Digite um valor de horas e minutos: \n");
    scanf("%f %f", &horas, &minutos);

    //operacoes matematicas

    minutos1 = horas *60 + minutos;

    //exibicao dos resultados
    printf("%.0f", minutos1);

    return 0;

}