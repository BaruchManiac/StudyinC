#include <stdio.h> 

int main(){
    float value;

    printf("escreva o valor do seu produto \n ");
    scanf("%f", &value);

    if(value <= 100 ){ 
        printf("Infelizmente a compra não tem desconto , valor do produto original: %.2f\n", value);
    }else if(value >100 & value <= 500)
        {
            printf("O valor do desconto é de 10 porcento o produto fica no valor: %.2f \n", value * 0.90);
        }else if(value > 500){
            printf("O valor do desconto e de 20 porcento, o produto fica no valor: %.2f \n", value * 0.80);
        }


    return 0; 
}