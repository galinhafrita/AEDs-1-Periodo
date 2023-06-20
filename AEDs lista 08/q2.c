#include<stdio.h>

/*
Autor - Matheus Fagundes Araujo
Ultima Atualizacao - 06/06/2023
Objetico - Lista de nome de loja
*/

typedef struct loja
{
    char nome[20];
    int telefone;
    int preco;
}loja;


int main(void)
{
    int precoTot=0, media=0;
    loja loja[16];

    printf("Digite o nome da loja:");

    for (int i = 0; i < 16; i++)
    {
        printf("Digite o nome da loja %d: ", (i+1));
        scanf("%s", loja[i].nome);   


       printf("Digite o telefone da loja %d: ", (i+1)); 
       scanf("%d", &loja[i].telefone);

       printf("Digite o preco do produto %d: ", (i+1));
       scanf("%d", &loja[i].preco);

        precoTot += loja[i].preco;
    }

    media = precoTot/16;

    for (int i = 0; i < 16; i++)
    {
        if (loja[i].preco < media)
        {
            printf("%s", loja[i].nome);
            printf("%d", loja[i].telefone);
        }
        
    }
    return 0;
    
    
}