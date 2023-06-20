#include<stdio.h>
#include <stdbool.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 13/04/2023
Objetivo -- Verificar se o numero e positivo ou negativo
*/

float numeroSinal(float valor)
{

    if(valor > 0) return 1;
    else if (valor <= 0) return 0;

}

int main(void)
{
    float numero, contador=0, valor;

    scanf("%f", &numero);

    while (numero > contador)
    {
        scanf("%f", &valor);
        if (numeroSinal(valor) == 1) printf("SIM\n");
        else if (numeroSinal(valor) == 0) printf("NAO\n");
        contador++;
    }
}