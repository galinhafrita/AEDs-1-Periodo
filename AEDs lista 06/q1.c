#include<stdio.h>

void recebaNotas(float notas[10])
{
    for(int i = 0; i < 10; i++)
    {
        printf("Aluno %d \n", i+1);
        scanf("%f", &notas[i]);
    }
}

void calculaMedia(float notas[10])
{
    float notasTotal=0, media=0;
    int godMedia=0;

    for (int i = 0; i < 10; i++)
    {
        notasTotal += notas[i];
    
    }
    media = notasTotal/10;

    for (int i = 0; i < 10; i++)
    {
        if (notas[i] > media)
        {
            godMedia++;
        }
    }
    printf("A media e: %.2f\n", media);
    printf("Quantidade de pessoas acima da media e de: %d\n", godMedia);
}

    int main(void)
    {
        float notas[10];

        recebaNotas(notas);
        calculaMedia(notas);

    }
    

