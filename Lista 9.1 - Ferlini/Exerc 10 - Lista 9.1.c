#include <stdio.h>

int main()
{
  int i;
  float materia1, materia2;
  float mat[3];



  for(i = 1; i < 3; i++){
    printf("Qual a primeira nota da %d disciplina? \n", i);
    scanf("%f", &materia1);
    printf("Qual a segunda nota da %d disciplina? \n", i);
    scanf("%f", &materia2);

    mat[i -1] = (materia1 + materia2) / 2;

  }
  printf("A media da 1 matéria é %.2f \n", mat[0]);
  printf("A media da 2 materia é %.2f \n", mat[1]);

  return 0; 



}