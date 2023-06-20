#include<stdio.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 17/04/2023
Objetivo -- Calcular media dos alunos aprovados
*/

float calculaMediaAprovados (int numero)
{
    int contador=0, divisor=0;
    float nota, notaTotal=0, media;



    while (numero > contador)
    {
        
        scanf("%f", &nota);

        if (nota >= 6) 
        {
            notaTotal += nota;
            divisor++;
        }
        
        contador++;
    }
    media = notaTotal/divisor;
    return media;
    
}
int main(void)
{
    int numero;
    
    scanf("%d", &numero);
    
    printf("%.1f", calculaMediaAprovados(numero));
}