#include <stdio.h> 
#include <math.h>

int main(){
    float value,km, total, aluguel;
    value = 800;

   printf("Valor do aluguel base R$800,00\n"); 
   printf("Quantos km vai ser percorrido?taxa de R$10,00 o km\n");
   scanf("%f", &km);

    total = km * 10;
    aluguel = total + 800;

    printf("O valor total do aluguel será de %.2f \n",aluguel);

    
    return 0;
}