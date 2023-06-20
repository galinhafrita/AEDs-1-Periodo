#include<stdio.h>
#include<stdlib.h>

/*
Autor - Matheus Fagundes 
Ultima Atualizacao -- 29/05/2023
Ojetivo - Imprimir a ordem alfabetica em um vetor
*/

void salvaAlfabeto(char* alfabeto)
{
    char letra='A';
    for (int i = 0; i < 24; i++)
    {
        *(alfabeto + i) = letra+i; 
    }  
}
void printarAlfabeto(char* alfabeto)
{

        printf("%s ", alfabeto);

    
}
int main(void)
{
    char* alfabeto = (char*)malloc(24 * sizeof(char));

    salvaAlfabeto(alfabeto);
    printarAlfabeto(alfabeto);

    free(alfabeto);
    return 0;
}
