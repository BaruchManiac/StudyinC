#include <stdio.h>
#include <string.h>

int main(){

    char mensagem[100],mensagem2[100], novamensagem[100];
    int cont,v;
    v = 0;

    printf("Escreva uma mensagem \n");
    fgets(mensagem, 100, stdin);
    printf("Escreva a segunda mensagem \n");
    fgets(mensagem2, 100, stdin);

    cont = strlen(mensagem);

    for(int i = 0; i < cont; i++){
        char caracter = mensagem[i];
        char caracter2 = mensagem2[i];
        if(caracter == caracter2){
            novamensagem[v++] = caracter;



        }

    }
     printf("o maior prefixo comum e de: %s \n", novamensagem);
     printf("o maior prefixo comum tem o comprimento de %d \n", v);

    return 0;
}

