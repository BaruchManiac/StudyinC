#include <stdio.h>
#include <string.h>

int main(){
    char theBook [] ="Gostosinho e a serie animada";
    char resumo [10] = "";

    for(int i = 0; i < 5; i++){
        char caracter = theBook[i];
        resumo[i] = caracter;
    }

    printf("%s",resumo);

    return 0;
}