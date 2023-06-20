#include<stdio.h>

/*
Autor -- Mathues Fagundes Araujo
Ultima Atualizacao -- 17/04/2023
Objetivo -- Calcular o numero S
*/

float calculaS (int numero)
{
    float s=0, n=1;
    int contador=0;

    while (numero > contador)
    {
    
        s = s + ((n * n) + 1) / (n + 3);

        n++;
        contador++;
    }
    return s;
    
}

int main (void)
{
    int n;
    scanf("%d", &n);
    printf("%f", calculaS(n));
}