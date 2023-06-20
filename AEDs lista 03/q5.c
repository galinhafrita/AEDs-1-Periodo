#include <stdio.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 12/04/2023
Objetivo -- Pontuacao em notas
*/

void classificacaoNota ()
{
    int nota, numero=0, contador=0;
    
    scanf("%d", &numero);

    while (numero > contador)
    {

    scanf("%d", &nota);

    if(nota < 40) printf("F\n");
    else if(nota > 39 && nota < 60) printf("E\n");
    else if(nota > 59 && nota < 70) printf("D\n");
    else if(nota > 69 && nota < 80) printf("C\n");
    else if(nota > 79 && nota < 90) printf("B\n");
    else if(nota >= 90) printf("A\n");

    contador++;
    
    }
}

int main(void)
{
    classificacaoNota();
}