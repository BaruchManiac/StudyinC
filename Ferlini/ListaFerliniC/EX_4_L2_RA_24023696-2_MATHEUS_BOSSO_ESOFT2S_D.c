#include <stdio.h> 
#include <math.h>

int main(){
    float bebida, colher, lapis,qtd;
    char escolha;
    bebida = 30;
    colher = 20;
    lapis = 10;
    
    printf("Qual produto vc esta comprando? bebida? colher? ou lapis?");
    scanf("%c", &escolha);
    printf("Quantos você está comprando?");
    scanf("%f",&qtd);
    
    switch(escolha)
    {
        case 'b': 
        if(qtd >= 3){
            bebida = 30 * qtd;
            printf("você ganhou 10 porcento de desconto valor total de %.2f",bebida * 0.90);
        }
        
    }

    
    
    return 0;
}