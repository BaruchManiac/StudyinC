#include <stdio.h> 
#include <math.h>

int main(){
    float value,km, gasolina, total, gasolinav;
    value = 10;

   printf("Sabendo que um carro faz 10 km/l"); 
   printf("Quantos km vai ser percorrido?");
   scanf("%f", &km);
   printf("Qual o preço da gasolina na localidade?");
   scanf("%f", &gasolina);

    total = km / value;
    gasolinav = total * gasolina;

    printf("O valor gasto com gasolina será de %.2f",gasolinav);

    
    return 0;
}