#include<stdio.h>
/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 29/03/2023
Objetivo -- Contagens de positivos de negativos
*/

int main(void)
{
    //declaracao das variaveis
    float n, numero, positivo=0, negativo=0, contagem=1, zero=0;

    //leitura do valor de N
    //printf("Digite o valor de numeros:\n");
    scanf("%f", &n);

    for (contagem; contagem <= n; contagem++)
    {
        //printf("Digite um numero:\n");
        scanf("%f", &numero);

        if (numero > 0)
        {
            positivo++;
        }
        else if (numero < 0)
        {
            negativo++;
        }
        else
        {
            zero++;
        }
    }

    printf("%.0f POSITIVOS\n", positivo);
    printf("%.0f NEGATIVOS\n", negativo);
    printf("%.0f ZEROS\n", zero);

}