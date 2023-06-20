#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 12/03/2023
Objetivo - Calcura a area e o perimetro de uma circunferencia*/

int main(void){

    //Declaracao de variaveis
    float raio, area, perimetro;

    //leitura dos numeros
    //printf("Digite o valor do raio de circulo: \n");
    scanf("%f", &raio);

    //operacoes matematicas
    area = 3.141592 * raio * raio;
    perimetro = 2 * 3.141592 * raio;

//exibicao de resultado
    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n", area);
}