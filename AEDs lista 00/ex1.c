#include<stdio.h>

/* Autor -- Matheus Fagundes Araujo 
Última atualização -- 12/03/2023
Objetivo - Inverter um número de 3 dígitos
*/

int main(void){
    // Descrição das variáveis
    int numero, centena, desena1, resposta;
    float desena, unidade;

    //leitura dos números
    //printf("Digite um numero de 3 digitos: \n");
    scanf("%d", &numero);

    // Operações matemáticas
    centena = numero / 100;
    unidade = numero % 10;
    desena = numero % 100;
    desena1 = desena / 10;
    resposta = unidade *100 + desena1 *10 + centena; 

    //Exibição dos resultados
    printf("%d", resposta);
    
    return 0;
}