#include <stdio.h>
#include <string.h>

int main() {
    char login[30], senha[30];
    char loginp[] = "loginlogin";
    char senhap[] = "charmander";

    printf("Qual o Login?\n");
    scanf("%29s", login);  
    
    printf("Qual a senha?\n");
    scanf("%29s", senha);  

    
    if (strcmp(senha, senhap) != 0 || strcmp(login, loginp) != 0) {
        printf("Login ou senha incorretos! Acesso negado.\n");
    } else {
        printf("Acesso concedido!\n");
    }

    return 0;
}
