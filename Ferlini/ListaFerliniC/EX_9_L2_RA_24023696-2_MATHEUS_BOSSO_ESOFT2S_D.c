#include <stdio.h>
int main(){
    int value, value1;
    printf("Descubra se um valor e um numero primo \n");
    printf("Digite um valor \n");
    scanf("%d",&value);
    if(value < 1)
    {
        printf("Valor inválido");
        return 0;
    }
    value1 = value / 2;
    if(value == 2){
        printf("Ele e primo");
    }else if(value % 2 == 0 && value % value1 == 0)
        {
            printf("Numero nao e primo");
         }else {
            printf("Ele e primo");
         }


    return 0;
}