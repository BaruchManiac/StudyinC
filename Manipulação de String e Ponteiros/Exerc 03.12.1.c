#include <stdio.h>
#include <string.h>

int main(){
    char nomecompleto [100];
    char firstname[] = "Matheus";
    char lastname[] = "Bosso";

    strcpy(nomecompleto, firstname);
    strcat(nomecompleto, " ");
    strcat(nomecompleto, lastname);

    printf("%s", nomecompleto);

    return 0;
}