#include<stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 16/03/2023
Objetivo - Enviar comentarios sobre a nota*/

int main(void)
{
    //atribuicao das variaveis
    float nota;

    //atribuicao dos valores
    //printf("Digite o valor da sua nota: \n");
    scanf("%f", &nota);

    //estrutura de condicao
    if (nota < 5)
    {
        printf("Insatisfatório");
    }
    else if (nota >= 5 && nota < 7)
    {
        printf("Regula");
    }
    else if (nota >= 7 && nota < 8)
    {
        printf("Bom");
    }
    else if (nota >= 8)
    {
        printf("Ótimo");
    }

    return 0;
}