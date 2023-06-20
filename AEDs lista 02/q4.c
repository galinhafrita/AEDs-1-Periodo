#include <stdio.h>

/*
  Autor -
  Última atualização -
  Objetivo - 
*/
int main(void) 
{
  // Declaração de variáveis
  float denominador=0, fat, numero, n, E = 0;
  

  //Leitura das variaveis
  //printf("Digite o valor de N: ");
  scanf("%f/",&n);
  
  // Cálculo de cada parcela
  while (denominador <= n)
  {
    fat = 1;
    for (numero=denominador; numero>=2; numero--)
    {
      fat = fat * numero;
    }
    E = E + 1.0/fat;
    
    denominador++;
  }

  printf("%.2f\n",E);
  return 0;
}