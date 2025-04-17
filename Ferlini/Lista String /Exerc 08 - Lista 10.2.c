#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>
#include <ctype.h> 


int main(){

    char mensagem[100], novamensagem[100], nova[100];

    int cont,v;
    v = 0;

    printf("Escreva uma mensagem \n");
    fgets(mensagem, 100, stdin);

    cont = strlen(mensagem);

    for(int i = 0; i < cont; i++){
        char caracter = mensagem[i];
        char nova = toupper(caracter);
        if(nova != 'A'&& nova != 'E'&& nova != 'I'&& nova != 'O'&& nova != 'U'){
            novamensagem[v++] = nova;
        }

    }
     printf("%s", novamensagem);

    return 0;
}
