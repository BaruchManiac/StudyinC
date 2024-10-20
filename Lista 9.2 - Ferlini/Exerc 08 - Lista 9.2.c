#include <stdio.h>

int main()
{
  int i, numb, sum;
  float media;
  i = 1;

  for(i = 1; i < 11; i++){
    printf("Qual o %d numero? \n",i);
    scanf("%d", &numb);
    if (numb % 2 == 0){
      printf("O número é par! \n ");
    }else{
      printf("O número é impar! \n");
      sum = sum + numb;
    }

  }
  media = sum / 10;
  printf("A media dos 10 numeros é %.2f \n", media);

  do{
    i = 1;
    i++;
    printf("Qual o %d numero? \n",i);
    scanf("%d", &numb);
    if (numb % 2 == 0){
      printf("O número é par! \n ");
    }else{
      printf("O número é impar! \n");
      sum = sum + numb;
    }

  }while(i < 11);{
    i = 1;
    i++;
    printf("Qual o %d numero? \n",i);
    scanf("%d", &numb);
    if (numb % 2 == 0){
      printf("O número é par! \n ");
    }else{
      printf("O número é impar! \n");
      sum = sum + numb;
    }
  }

  media = sum / 10;
  printf("A media dos 10 numeros é %.2f \n", media);

  return 0; 
}