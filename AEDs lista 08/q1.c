#include<stdio.h>
/*
Autor - Matheus Fagundes Araujo
Ultima atualizacao - 06/06/2023
Objetivo - Escrita e manipulacao da struct
*/

typedef struct pessoa
{
    char nome[20];
    char aniversario[10];
} Pessoa;

int main(void)
{
    Pessoa pessoas[40];

    // Accessing and modifying elements of the array
    for (int i = 0; i < 40; i++)
    {
        printf("Enter name for person %d: ", i + 1);
        scanf("%s", pessoas[i].nome);

        printf("Enter birthday for person %d: ", i + 1);
        scanf("%s", pessoas[i].aniversario);
    }

    // Printing the names and birthdays of all persons
    for (int i = 0; i < 40; i++)
    {
        printf("Person %d:\n", i + 1);
        printf("Name: %s\n", pessoas[i].nome);
        printf("Birthday: %s\n", pessoas[i].aniversario);
        printf("\n");
    }

    return 0;
}
