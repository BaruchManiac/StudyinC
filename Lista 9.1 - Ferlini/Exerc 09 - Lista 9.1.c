#include <stdio.h>

int main()
{
  int num, maior, menor;
  num = 0;
  maior = 0;
  menor = 10000000;

  while(num >= 0 ){
    
    printf("Escreva um valor para descobrir se é positivo ou negativo \n");
    scanf("%d", &num);

    if (num < 0){
        printf("O Valor é negativo! \n");
    }else{
        printf("O valor é positivo! \n");
    }


    if(num > maior){
        maior = num;
    }
    if(menor > num){
        menor = num;
    }

    printf ("O maior número da sequencia é %d \n", maior);
    printf ("O menor número da sequencia é %d \n", menor);


  }
    printf ("O maior número é %d \n", maior);
    printf ("O menor número é %d \n", menor);
    return 0;
}