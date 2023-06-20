#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 12/03/2023
Objetivo - Calcular perimetro, area e a diagonal de retangulo*/

int main(void){

    //Declaracao de variaveis
    float base, altura, area, perimetro, diagonal, somaQ;

    //Leitura dos Numeros

    //printf("Digite a base e a altura do triangulo: \n");
    scanf("%f %f", &base, &altura);

    //Operacoes matematicas

    area = base * altura;
    perimetro = 2 * base + 2 * altura;
    somaQ = base * base + altura * altura;
    diagonal = sqrt(somaQ);

    //Exibicao do resultado
    
    printf("Perímetro: %.2f\n", perimetro);
    printf("Área: %.2f\n", area);
    printf("Diagonal: %.2f\n", diagonal);

    
    }