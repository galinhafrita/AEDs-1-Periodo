#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
Autor - Matheus Fagundes
Ultima atualizacao - 31/05/2023
Objetivo - Identificar palindrom
*/
void inverteTexto(char* texto, char* textoInvert, int quant)
{
    int contador = quant;

    for (int q = 0; q < quant; q++)
    {
        *(textoInvert+q) = *(texto+contador-1);
        contador--;
    }
    
}
int main(void)
{
    int quant;
    char* texto = (char*)malloc(100 * sizeof(char));
    
    scanf("%s", texto);
    quant = strlen(texto);
    
    char* textoContado = (char*)malloc(quant * sizeof(char));
    char* textoInvertido = (char*)malloc(quant * sizeof(char));


    strcpy(textoContado, texto);
    inverteTexto(textoContado, textoInvertido, quant);
    
    printf("%s", textoInvertido);

    if (strcmp(textoContado, textoInvertido) == 0)
    {
        printf("\npalindromo");
    }
    else
    {
        printf("\nnao");
    }
    



    free(texto);
    free(textoContado);
    free(textoInvertido);
    return 0;

}