#include<stdio.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 17/04/2023
Objetivo -- Categorizador de pessoas por idade
*/

void categorizador (int numero)
{
    int contador=0, idade;

    while (numero > contador)
    {
        
        scanf("%d", &idade);

        if (idade > 4 && idade < 8) printf("F\n");
        else if (idade > 7 && idade < 11) printf("E\n");
        else if (idade > 10 && idade < 14) printf("D\n");
        else if (idade > 13 && idade < 16) printf("C\n");
        else if (idade > 16 && idade < 18) printf("B\n");
        else if (idade >= 18) printf("A\n");
        
        contador++;
    }
    
}

int main(void)
{
    int numero;
    
    scanf("%d", &numero);
    
    categorizador(numero);
    
}