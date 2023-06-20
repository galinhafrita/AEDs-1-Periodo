#include<stdio.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 13/04/2023
Objetivo --  colocar em ordem crescente 
*/

void ordemCrescente()
{
    int numero, contador=0, valor1, valor2, valor3;

    scanf("%d", &numero);

    while (numero >= contador)
    {
        scanf("%d %d %d", &valor1, &valor2, &valor3);

        if (valor1 > valor2 && valor1 > valor3 && valor2 > valor3) printf("%d %d %d\n", valor3, valor2, valor1);
        else if (valor1 > valor2 && valor1 > valor3 && valor3 > valor2) printf("%d %d %d\n", valor2, valor3, valor1);
        else if (valor2 > valor1 && valor2 > valor3 && valor1 > valor3) printf("%d %d %d\n", valor3, valor1, valor2);
        else if (valor2 > valor1 && valor2 > valor3 && valor3 > valor1) printf("%d %d %d\n", valor1, valor3, valor2);
        else if (valor3 > valor1 && valor3 > valor2 && valor2 > valor1) printf("%d %d %d\n", valor1, valor2, valor3);
        else if (valor3 > valor1 && valor3 > valor2 && valor1 > valor2) printf("%d %d %d\n", valor2, valor1, valor3);
        
        contador++;
    }
    
}
int main(void)
{
    ordemCrescente();
}