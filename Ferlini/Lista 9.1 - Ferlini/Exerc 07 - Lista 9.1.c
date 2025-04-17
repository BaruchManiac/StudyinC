#include <stdio.h>

int main()
{
    float cel, fah;
    int choice; 

    printf("ESCOLHA QUAL CONVERSOR VC GOSTARIA \n");
    printf("1 - FAHRENHIT -> CELCIUS \n");
    printf("2- CELCIUS -> FARH \n");
    scanf("%d", &choice);

    while(choice < 3){

    if(choice == 2){
        printf("Qual o valor em Fahrenhit? \n");
        scanf("%f", &fah);
        cel = (fah - 32) / 1,8;
        printf("O valor em Celcius é %.2f",cel);
        
    }
    if(choice == 1){
        printf("Qual o valor em Celcius? \n");
        scanf("%f", &cel);
        fah = (cel * 1,8) + 32;
        printf("O valor em Fahrenhit é %.2f \n", fah);
    }

    printf("ESCOLHA QUAL CONVERSOR VC GOSTARIA \n");
    printf("1 - FAHRENHIT -> CELCIUS \n");
    printf("2- CELCIUS -> FARH \n");
    printf("3- SAIR \n");
    scanf("%d", &choice);


    }

    return 0;
}