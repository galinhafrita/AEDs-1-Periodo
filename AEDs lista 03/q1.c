#include <stdio.h>

/*
Autor -- Matheus Fagundes Araujo
Ultima Atualizacao -- 08/04/2023
Objetivo -- Calcula media de provas
*/

float media(int alunos)
{
    float notas, notatotal =0, medianotas, alunoNum =1;
    int texto =3, contador =0;

        
        while (contador < alunos * 3)
        {

        if (texto % 3 == 0) printf("Aluno %.0f:\n", alunoNum);
            scanf("%f", &notas);
            notatotal = notatotal + notas;
            contador++;
            texto++;
            if (contador % 3 == 0) alunoNum++;
        }
 
 
    medianotas = notatotal / (alunos * 3);

    return medianotas;
}

float mediaPeso(int alunos)
{
    float aluno1, aluno2, aluno3, media;

    scanf("%f %f %f", &aluno1, &aluno2, &aluno3);

    media = (aluno1 * 5) + (aluno2 * 3) + (aluno3 * 2) / 10;
    return media;
}

int main(void)
{

    int alunos;
    char opcao;

    printf("Digite A para opcao 1 e B para opcao 2: ");
    scanf(" %c", &opcao);

    if (opcao == 'A' || opcao == 'a')
    {
        printf("Digite a quantiddade de alunos: ");
        scanf("%d", &alunos);
        printf("A media da nota dos alunos e: %.2f", media(alunos));
    }
    else if (opcao == 'B' || opcao == 'b')
    {
        printf("Digite a quantidade de alunos: ");
        scanf("%d", &alunos);
        printf("A media da nota dos alunos e: %.2f", mediaPeso(alunos));
    }
    else
        printf("Opcao invalida\n");

    return 0;
}