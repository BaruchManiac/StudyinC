#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    float alt, soma, media;
    int numb, i;
    i = 0;
    soma = 0;

    printf("Quantos alunos tem a sala? \n");
    scanf("%d", &numb);

    do{
        i++;
        printf("Qual a altura do %d aluno? \n", i);
        scanf("%f", &alt);
        soma += alt;

    }while(i < numb);
    media = soma / numb; 

    printf("A media de altura da turma e %.2f", media);
    return 0;
}