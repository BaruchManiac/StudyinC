#include <stdio.h>
int main() {
    char msg[100], busc;
    int count = 0;

    printf("Informe os caracteres: ");
    fgets(msg, sizeof(msg), stdin);

    printf("Informe o caractere que deseja buscar: ");
    scanf("%c", &busc);

    for (int i = 0; msg[i] != '\0'; ++i) {
        if (busc == msg[i])
            ++count;
    }

    printf("Quantidade de %c = %d", busc, count);
    return 0;
}