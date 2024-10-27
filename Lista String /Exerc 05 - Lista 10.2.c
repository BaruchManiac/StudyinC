#include <stdio.h>
#include <string.h>

int main(){

    char mensagem[100];
    int cont,v;
    v = 1;

    printf("Escreva uma mensagem \n");
    fgets(mensagem, 100, stdin);

    cont = strlen(mensagem);

    for(int i = 0; i < cont; i++){
        char caracter = mensagem[i];
        if(caracter == ' '){
            v++;
        }

    }
     printf("A String tem %d palavras", v);

    return 0;
}
