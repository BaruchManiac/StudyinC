#include <stdio.h> 

int main(){
    float cel, fah;
    char escolha;

    printf("Qual você gostaria de estar convertendo? Celsius ou Fahrenheit\n");
    scanf("%c", &escolha);
    if (escolha != 'c' && escolha != 'f'){
        printf("Escolha inválida");
        return 0; 
    }
    if(escolha == 'f'){
        printf("Qual a temperatura em Fahrenheit?\n");
        scanf("%f", &fah);
        cel = (fah - 32) / 1.8;
        printf("A temperatura em Celcius fica: %.2f", cel);
    }else
        {
            printf("Qual a temperatura em Celcius?\n");
            scanf("%f", &cel);
            fah = (cel * 1.8) + 32 ;
            printf("A temperatura em Fahrenheit fica: %.2f", fah);
        }

}