#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "String.h";
    char destino [] = " ";
    strcpy(destino, str);
    printf("%s",destino);

    return 0;
}