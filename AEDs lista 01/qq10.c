#include <stdio.h>

/*Autor -- Matheus Fagundes Araujo
Ultima atualizacao -- 18/03/2023
Objetico -- Leia a velocidade máxima permitida em uma avenida e a velocidade com que o motorista estava
dirigindo nela. Se o motorista estiver dentro do limite de velocidade, imprima a mensagem “Motorista
respeitou a lei”. Se o motorista tiver ultrapassado a velocidade máxima permitida, calcule e imprima
o valor da multa a ser cobrada, sabendo que os valores a serem cobrados são os seguintes:
• 50 reais se o motorista ultrapassar em até 10km/h a velocidade permitida (ex: se a velocidade
máxima for 50km/h e o motorista estiver a 60km/h ou a 56km/h);
• 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida;
• 200 reais, se estiver acima de 30km/h da velocidade permitida.*/

int main(void)
{
    // declaricao das variaveis
    float velMax, velMot, velMax10, velMax11, velMax30;

    // atribuicao dos valores
    //printf("Digite o valor da velocidade maxima permitida e a velocidade atual\n");
    scanf("%f %f", &velMax, &velMot);
    // operacoes matematicas

    velMax10 = velMax + 10;
    velMax11 = velMax + 11;
    velMax30 = velMax + 30;

    // estrutura de condicao
    if (velMot <= velMax)
    {
        printf("Motorista respeitou a lei\n");
    }
    else
    {
        if (velMot <= velMax10 && velMot > velMax)
        {
            printf("Multa de 50 reais\n");
        }
        else if (velMot >= velMax11 && velMot <= velMax30)
        {
            printf("Multa de 100 reais");
        }
        else if (velMot > velMax30)
        {
            printf("Multa de 200 reais\n");
        }
    }
}