#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int number, cont, choice;

    srand(time(NULL));
    
    do{
        number = rand() % 101; 
        printf("Adivinhe o valor aleatório!, escolha um valor de 0 a 100:  \n");
        scanf("%d", &choice);
        if(choice > 100 || choice < 0){
            printf("Valor inválido! escolha um valor entre 0 e 100!");
            return 0; 
        }
        if(choice == number){
            printf("Você adivinhou corretamente! \n");
            printf("Caso deseje continuar pressione 1, se quiser encerrar aperte qualquer outro número \n");
            scanf("%d", &cont);
        }else
        {
            printf("Você errou! \n");
            printf("Caso deseje continuar pressione 1, se quiser encerrar aperte qualquer outro número \n");
            scanf("%d", &cont);

        }
        
    }while(cont == 1);
    return 0;
}