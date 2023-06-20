#include<stdio.h>
#include<stdlib.h>

/*
Autor - Matheus Fagundes Araujo
Ultima Atualizacoa - 31/05/2023
Objetivo - remove mais de 1 espaco em branco em sequencia de um texto digitado
*/


void preencheTexto(char* texto)
{
        scanf("%[^\n]", texto);
}


int main(void)
{
    int contador =0;
    char* texto = (char*)malloc(30 * sizeof(char));

    preencheTexto(texto);
    for (int i = 0; i < 30; i++)
    {
        if (*(texto+i) == ' ')
        {
            contador++;
        }
    }


    for (int i = 0; i < 30; i++)
    {
        if (*(texto+i) == ' ' && *(texto+i+1) == ' ')
        {

            for (int j = 0; j < 30; j++)
            {
                *(texto+i+1+j) = *(texto+i+contador+j);
            }
        }
    }
    printf("%s", texto);
    free(texto);
}