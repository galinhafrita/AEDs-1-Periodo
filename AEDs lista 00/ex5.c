#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 12/03/2023
Objetivo - calculo da hipotenusa*/

int main(void){

//declaracao das variaveis
    float cat1, cat2, hipo, hipo2;

//leitura dos numeros

    //printf("Digite o valor dos dois catetos: \n");
    scanf("%f %f", &cat1, &cat2);

//operacoes matematicas

    hipo2 = cat1 * cat1 + cat2 * cat2;
    hipo = sqrt(hipo2);

//Exibicao dos resultados

    printf("Hipotenusa: %.2f", hipo);

}