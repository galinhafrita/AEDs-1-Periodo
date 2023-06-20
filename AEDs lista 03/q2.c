#include<stdio.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 08/04/2023
Objetivo -- Media de salario da populacao
*/

void mediaSalario ()
{
    float salario=0, salarioTot, pessoas;
    int numFilhos;

    
    
    while (salario >= 0 || numFilhos >=0)
    {
        scanf("%f", &salario);
        scanf("%d", &numFilhos);
        if(salario >= 0) 
        {
            salarioTot = salarioTot + salario;
            pessoas++;
        }
    }

    printf("%.2f\n", salarioTot/pessoas);
    

}
int main(void)
{
    mediaSalario();
}