#include<stdio.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 17/04/2023
Objetivo -- Calcular media da populacao
*/

int main(void)
{

    //declaracao das variaveis

    float salario=0, salarioTotal=0, salarioAux=0, salarioMax=0;
    int populacao=0, filhos=0, filhosTotal=0, salarioMenor=0;

    while (salario >= 0)
    {
        //calculo do salario
        
        salarioAux = salario;

        if (salario >= 0) salarioTotal += salario;

        scanf("%f", &salario);

        if(salario > salarioAux && salario > salarioMax) salarioMax = salario;
       
        if(salario < 100 && salario >= 0) salarioMenor++;

        //calculo dos filhos

        if (filhos >=0) filhosTotal += filhos;

        scanf("%d", &filhos);

        if (salario >=0) populacao++;
    }

    printf("%.2f\n", salarioTotal/(float)populacao); //media do salario da populacao
    printf("%d\n", filhosTotal/populacao); //media dos filhos da populacao
    printf("%.2f\n", salarioMax); //maior salario
    printf("%.2f\n", (float)salarioMenor*100/populacao); //porcentagem de pessoas com salario menor que 100

    
}