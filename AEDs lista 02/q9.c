#include<stdio.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao
Objetivo -- Lucro */


int main(void)
{
    //declaracao das variaveis
    float precoCompra, precoVenda, lucromenor, lucromedio, lucromaior, compraTotal=0, vendaTotal=0, lucroTotal;
    
    
    // estrutura de condicao
    while (precoCompra != 0)
    {
        //printf("Digite o preco de compra: \n");
        scanf("%f", &precoCompra);
        //printf("Digite o preco de compra: \n");
        scanf("%f", &precoVenda);

        if (precoVenda - precoCompra < precoCompra * 10/100) lucromenor++;
        else if (precoVenda - precoCompra >= precoCompra *10/100 && precoVenda - precoCompra <= precoCompra*20/100 && precoCompra !=0) lucromedio++;
        else if(precoVenda - precoCompra > precoCompra*20/100 && precoCompra != 0) lucromaior++;
        
        compraTotal = compraTotal + precoCompra;
        vendaTotal = vendaTotal + precoVenda;
        

    }
    lucroTotal = vendaTotal - compraTotal;

    printf("%.0f\n", lucromenor);
    printf("%.0f\n", lucromedio);
    printf("%.0f\n", lucromaior);
    printf("%.2f\n", compraTotal);
    printf("%.2f\n", vendaTotal);
    printf("%.2f\n", lucroTotal);
}