#include <stdio.h>
#include <string.h>

int main(){

    char mensagem[100], novamensagem[100];
    int cont,v,i,duplicado,z;
    i = 0;
    v = 0;

    printf("Escreva uma mensagem \n");
    fgets(mensagem, 100, stdin);
    cont = strlen(mensagem);

    for (i = 0; i < cont; i++) {
        duplicado = 0;
        for (z = 0; z < v; z++) {
            if (mensagem[i] == novamensagem[z]) {
                duplicado = 1; 
                break;
            }
        }
        if (!duplicado && mensagem[i] != '\n') { 
            novamensagem[v] = mensagem[i];
            v++;
        }
    }
    novamensagem[v] = '\0';
    printf("%s \n", novamensagem);
    return 0;
}

