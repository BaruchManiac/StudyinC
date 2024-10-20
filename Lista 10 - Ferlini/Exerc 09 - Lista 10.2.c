#include <stdio.h>
#include <string.h>

int main(){

    char mensagem[100],mensagem1[100], novamensagem[100];
    int cont,cont1,contsupreme;

    printf("Escreva uma mensagem \n");
    fgets(mensagem, 100, stdin);
    printf("Escreva uma segunda mensagem \n");
    fgets(mensagem1, 100, stdin);

    cont = strlen(mensagem);
    cont1 = strlen(mensagem1);
    
    contsupreme = (cont1 >= cont) ? cont1 : cont;

    for(int i = 0; i < contsupreme; i++){
        char caracter = mensagem[i];
        char caracter1 = mensagem1[i];
        if(i % 2 == 0){
            novamensagem[i] = caracter;
        }else{
            novamensagem[i] = caracter1;
        }

    }
    novamensagem[contsupreme] = '\0';
    printf("%s", novamensagem);

    return 0;
}
