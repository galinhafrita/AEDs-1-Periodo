#include<stdio.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 12/04/2023
Objetivo -- Verificar e ver qual tipo de triangulo e
*/

void verificandoTriangulo()
{
    float l1, l2, l3;


    while (l1 > 0 || l2 > 0 || l3 > 0)
    {
        
    scanf("%f %f %f", &l1, &l2, &l3);
    if(l1 < 0 || l2 < 0 || l3 < 0) {}
    else if (l1 >= l2 + l3 || l2 >= l1 + l3 || l3 >= l1 + l2) printf("NÃO TRIANGULO\n");
    else if (l1 == l2 && l2 == l3 ) printf("TRIANGULO EQUILATERO\n");
    else if(l1 == l2 && l1 != l3 ) printf("TRIANGULO ISOCELES\n");
    else if(l2 == l3 && l2 != l1 ) printf("TRIANGULO ISOCELES\n");
    else if(l1 == l3 && l1 != l2 ) printf("TRIANGULO ISOCELES\n");
    else if(l1 != l2 && l1 != l3 && l2 != l3 && l1 >0) printf("TRIANGULO ESCALENO\n");
    }
}

int main (void)
{
    
    verificandoTriangulo();
}