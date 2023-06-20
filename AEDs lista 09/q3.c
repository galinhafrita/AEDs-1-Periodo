#include<stdio.h>
#include<stdlib.h>
/*
Autor - Matheus Fagundes
Ultima Autalizacao - 31/05/2023
Objetivo - Escrever o mes de uma data por extenso
*/

void preencheData(char* data)
{
    scanf("%s", data);
}
void printPorExtenso(char* data)
{
    if(*(data+3) == '0' && *(data+4) == '1') printf("%c%c de janeiro de %c%c%c%c", *(data+0), *(data+1), *(data+6), *(data+7), *(data+8), *(data+9));
    if(*(data+3) == '0' && *(data+4) == '2') printf("%c%c de fevereiro de %c%c%c%c", *(data+0), *(data+1), *(data+6), *(data+7), *(data+8), *(data+9));
    if(*(data+3) == '0' && *(data+4) == '3') printf("%c%c de marco de %c%c%c%c", *(data+0), *(data+1), *(data+6), *(data+7), *(data+8), *(data+9));
    if(*(data+3) == '0' && *(data+4) == '4') printf("%c%c de abril de %c%c%c%c", *(data+0), *(data+1), *(data+6), *(data+7), *(data+8), *(data+9));
    if(*(data+3) == '0' && *(data+4) == '5') printf("%c%c de maio de %c%c%c%c", *(data+0), *(data+1), *(data+6), *(data+7), *(data+8), *(data+9));
    if(*(data+3) == '0' && *(data+4) == '6') printf("%c%c de junho de %c%c%c%c", *(data+0), *(data+1), *(data+6), *(data+7), *(data+8), *(data+9));
    if(*(data+3) == '0' && *(data+4) == '7') printf("%c%c de julho de %c%c%c%c", *(data+0), *(data+1), *(data+6), *(data+7), *(data+8), *(data+9));
    if(*(data+3) == '0' && *(data+4) == '8') printf("%c%c de agosto de %c%c%c%c", *(data+0), *(data+1), *(data+6), *(data+7), *(data+8), *(data+9));
    if(*(data+3) == '0' && *(data+4) == '9') printf("%c%c de setembro de %c%c%c%c", *(data+0), *(data+1), *(data+6), *(data+7), *(data+8), *(data+9));
    if(*(data+3) == '1' && *(data+4) == '0') printf("%c%c de outubro de %c%c%c%c", *(data+0), *(data+1), *(data+6), *(data+7), *(data+8), *(data+9));
    if(*(data+3) == '1' && *(data+4) == '1') printf("%c%c de novembro de %c%c%c%c", *(data+0), *(data+1), *(data+6), *(data+7), *(data+8), *(data+9));
    if(*(data+3) == '1' && *(data+4) == '2') printf("%c%c de dezembro de %c%c%c%c", *(data+0), *(data+1), *(data+6), *(data+7), *(data+8), *(data+9));
}

int main(void)
{
    char* data = (char*)malloc(10 * sizeof(char));

    preencheData(data);
    printPorExtenso(data);

    free(data);
    return 0;
}