#include <stdio.h>
#include <string.h>

int main(){

    char* mensagem[] = "A Palavra Chave deve ser retirada ";
    char novamensagem[100];
    int cont,v;
    v = 0;

    cont = strlen(mensagem);

    printf("A frase original da string é: %s \n", mensagem);

    for(int i = 0; i < cont; i++){
        char caracter = mensagem[i];
        if(i < 9 || i > 14){
            novamensagem[v++] = caracter;
        }

    }
     printf("A Nova frase é : %s", novamensagem);

    return 0;
}
