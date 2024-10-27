#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char mensagem1[50],mensagem2[50];
    int dif;

    printf("Primeira mensagem: \n");
    fgets(mensagem1, 50, stdin);
    printf("Segunda mensagem: \n");
    fgets(mensagem2, 50, stdin);

    dif = strcmp(mensagem1, mensagem2);
    if(dif == 0){
        printf("As duas palavras são iguais!");
    }else{
        printf("As duas palavras são diferentes!");
    }

    return 0;
}
