#include<stdio.h> 

int main() {
    int saque, value100, value50, value20, value10, value5, resto;

    printf("Digite o valor a ser sacado: \n");
    scanf("%d", &saque);

    value100 = saque / 100;
    resto = saque % 100;

    if (value50 = resto / 50){resto = resto % 50;}

    if(value20 = resto / 20){resto = resto % 20;}

    if(value10 = resto / 10){resto = resto % 10;}

    if(value5 = resto / 5){resto = resto % 5;}

    printf("Distribuição de notas:\n");
    printf("Notas de 100: %d\n", value100);
    printf("Notas de 50: %d\n", value50);
    printf("Notas de 20: %d\n", value20);
    printf("Notas de 10: %d\n", value10);
    printf("Notas de 5: %d\n", value5);

    return 0;
}
