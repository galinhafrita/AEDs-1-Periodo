#include<stdio.h>


/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 17/04/2023
Objetivo -- Calcular valor S
*/


float calculaS (int valor)
{
  // Declaração de variáveis
  float denominador=0, fat, numero, E = 0;
  
  // Cálculo de cada parcela
  while (denominador <= valor)
  {
    fat = 1;
    for (numero=denominador; numero>=2; numero--)
    {
      fat = fat * numero;
    }
    E = E + 1.0/fat;
    
    denominador++;
  }

  return E;
}
 

int main(void)
{
    float valor;

    scanf("%f", &valor);

    printf("%f", calculaS(valor));
}