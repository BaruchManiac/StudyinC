#include <stdio.h>
#include <string.h>

int main(){
    char theBook [] ="Gostosinho";
    char theAutor [] = "Ventura";
    char resumo [10] = "";
    char resumo2 [10] = "";


    for(int i = 0; i < 4; i++){
        char caracter = theBook[i];
        resumo[i] = caracter;
        char caracter2 = theAutor[i];
        resumo2[i] = caracter2;
    }

    if(strcmp(resumo, resumo2) < 0){
        printf("A estrutura diz que %s vem primeiro", resumo);
    }else{
        printf("O que dizer? e o %s primeiro", resumo2);
    }

    /*
    strcmp(theBook, theAutor , 4) tb funciona para pegar os 4 primeiros caracter, mas 
    como vi um excelente oportunidade de usar tudo aproveitei para usar
    */

    return 0;
}