#include <stdio.h>

int main()
{
    int number;
    int i;

    for(i = 0; i < 30; i++){
        printf("Escolha um número \n");
        scanf("%d", &number);
        if (number <= 3 ){
            printf("O NÚMERO É PRIMO \n");
        }
        if(number > 3 && number % 2 == 0 && number % (number / 2) == 0){
            printf("O NÚMERO NÃO E PRIMO \n");

        }
        
        if(number > 3 && number % 2 != 0 && number % (number / 2) != 0){
            printf("O NÚMERO É PRIMO \n");
        }

    }
    
    return 0;
}