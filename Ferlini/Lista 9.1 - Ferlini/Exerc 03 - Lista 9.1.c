#include <stdio.h>

int main()
{
    
    int number, i, soma;
    float media; 
    i = 0;
    soma = 0;
    

    do{
        i++;
        printf("Escreva o %d valor \n",i);
        scanf("%d", &number);

        soma += number; 

    }while(i<5);

    media = soma / 5;

    printf("A media dos valores apresentados e %.2f", media);
    

    return 0;
}