#include <stdio.h>
#include <string.h>

int main(){
    char theBook [] ="Gostosinho";
    char theAutor [] = "Triangulo";
    char resumo [10] = "";
    char resultado [10] = "";

    strcpy(resultado, theBook);
    strcat(resultado, " ");

    for(int i = 0; i < 3; i++){
        char caracter = theAutor[i];
        resumo[i] = caracter;
    }

    strcat(resultado, resumo);

    printf("%s",resultado);

    return 0;
}