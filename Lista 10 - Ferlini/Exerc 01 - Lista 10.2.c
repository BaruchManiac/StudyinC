#include <stdio.h>
#include <string.h>

int main(){

    char mensagem[100], novamensagem[100];
    int cont,v;
    v = 0;

    printf("Escreva uma mensagem \n");
    fgets(mensagem, 100, stdin);

    cont = strlen(mensagem);

    for(int i = 0; i < cont; i++){
        char caracter = mensagem[i];
        if(caracter != ' '){
            novamensagem[v++] = caracter;


        }

    }
     printf("%s", novamensagem);

    return 0;
}
