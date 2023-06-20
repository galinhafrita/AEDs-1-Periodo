#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 12/03/2023
objetivo - tranformar 2 numeros em decimais*/

int main(void){

    //declaracao das variaveis
    float numerador, denominador, decimal;

    //leitura dos numeros
    //printf("Digite o numerador e o denominador \n");
    scanf("%f %f", &numerador, &denominador);

    //operacoes matematicas
    decimal = numerador/denominador;

    //exibicao dos resultados
    printf("%f", decimal);

return 0;

}