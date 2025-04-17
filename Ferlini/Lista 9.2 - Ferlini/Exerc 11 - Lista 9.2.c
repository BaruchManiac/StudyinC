#include <stdio.h>

int main(){
    int idade, jovem, velho, i; 
    i = 0 ;
    jovem = 0;
    velho = 120;
    
    for(i = 0; i < 5; i++){
        printf("qual a idade da %d pessoa?", i + 1);
        scanf("%d", &idade);
        if(idade > velho){
            velho = idade;
        }
        if(jovem > idade){
            jovem = idade;
        }
    }
    printf("a pessoa mais velha tem %d idade \n", velho);
    printf("a pessoa mais jovem tem %d idade \n", jovem);

    while(i<5){
         printf("qual a idade da %d pessoa?", i + 1);
        scanf("%d", &idade);
        if(idade > velho){
            velho = idade;
        }
        if(jovem > idade){
            jovem = idade;
        }
    }
    printf("a pessoa mais velha tem %d idade \n", velho);
    printf("a pessoa mais jovem tem %d idade \n", jovem);

    do{
         printf("qual a idade da %d pessoa?", i + 1);
        scanf("%d", &idade);
        if(idade > velho){
            velho = idade;
        }
        if(jovem > idade){
            jovem = idade;
        }

    }while(i<5);
    printf("a pessoa mais velha tem %d idade \n", velho);
    printf("a pessoa mais jovem tem %d idade \n", jovem);

    

    
}