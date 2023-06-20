#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 12/03/2023
Objetivo - inverter x por y*/

int main(void){

    //daclaracao dos numeros
    float x, y, z, w;

    //leitura dos numeros
    //printf("Digite 2 numeros:\n");
    scanf("%f %f", &x, &y);

    //operacoes matematicas
    z = y;
    w = x;
    x = z;
    y = w;

    //exibicao dos resultados
    printf("%f %f", x, y);

    return 0;

}