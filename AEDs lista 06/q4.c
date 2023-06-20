#include<stdio.h>
#include<stdlib.h>

/*
Nome -- Matheus Fagundes
Ultima Ataualizacao
Objetivo -- Verificar quantos dias a temperatura ficou abaixo da media
*/

int main(void)
{
    int temperatura[31], somaTemp=0, mediaTemp=0, baixaTemp=0;

    for (int i = 0; i < 31; i++)
    {
        scanf("%d", &temperatura[i]);
    }

    for (int i = 0; i < 31; i++)
    {
        somaTemp += temperatura[i];
    }
    mediaTemp = somaTemp/31;

    for (int i = 0; i < 31; i++)
    {
        if(temperatura[i]< mediaTemp) baixaTemp++;
    }
    

    printf("Temperatura media %d\n", mediaTemp);

    printf("Abaixo da temperatura media %d\n", baixaTemp);
}