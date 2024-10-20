#include <stdio.h>

int main()
{
  int i, num, soma;
  float media; 
  i=0;

  for(i=0; i <= 15; i++){
    printf("Qual o %d numero? \n", i +1);
    scanf("%d", &num);
    soma += num; 
  }

  media = soma / 15; 

  printf("A media é %.2f \n", media);

  do{
    printf("Qual o %d numero? \n", i +1);
    scanf("%d", &num);
    soma += num; 
    i++;
  }while (i <= 15); 

  media = soma / 15; 

  printf("A media é %.2f \n", media);

  while(i <= 15){
    printf("Qual o %d numero? \n", i +1);
    scanf("%d", &num);
    soma += num; 
    i++;
  }

  media = soma / 15; 

  printf("A media é %.2f \n", media);

  return 0; 

}