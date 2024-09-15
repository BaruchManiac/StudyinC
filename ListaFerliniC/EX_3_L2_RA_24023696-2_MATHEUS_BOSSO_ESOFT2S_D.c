#include <stdio.h> 

int main(){
    int nota;

    printf("escreva a nota de desempenho do funcionário(entre 0 a 100) \n ");
    scanf("%d", &nota);
    if(nota > 100 || nota < 0 ){
        printf("Valor inválido escolha entre 0 a 100");
    }

    if(nota >= 80 ){ 
        printf("O Bonus de desempenho do funcionário será de: 20 porcento");
    }else if(nota >= 50 && nota < 80)
        {
            printf("O Bonus de desempenho do funcionário será de: 10 porcento");
          }else if(nota > 30 && nota < 50){
             printf("O Bonus de desempenho do funcionário será de: 05 porcento");
            }else{
            printf("Não haverá bonus, salário continua regular");
             }

    return 0; 
}