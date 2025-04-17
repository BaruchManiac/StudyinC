#include <stdio.h>
#include <ctype.h>

int main()
{
 int i, old;
 char name, sexo;
 i = 0;

 printf("Qual o seu nome? \n");
 scanf("%s", &name);
do{
    printf("Qual a sua idade? \n");
    scanf("%d", &old);
    if(old < 10 || old >= 50){
        printf("Idade inválida!");
    }else{
        i++;
    }
    printf("Qual o seu Sexo? F ou M? \n");
    scanf("%c", &sexo);
    sexo = toupper(sexo); 
    if(sexo != 'M' || sexo != 'F'){
        printf("Sexo inválido!");
    }else{
        i++;
    }

}while(i < 2);

while(i<2){
    printf("Qual a sua idade? \n");
    scanf("%d", &old);
    if(old < 10 || old >= 50){
        printf("Idade inválida!");
    }else{
        i++;
    }
    printf("Qual o seu Sexo? F ou M? \n");
    scanf("%c", &sexo);
    sexo = toupper(sexo); 
    if(sexo != 'M' || sexo != 'F'){
        printf("Sexo inválido!");
    }else{
        i++;
    }
}

for(i=0;i<2; i++){
    i--;
    printf("Qual a sua idade? \n");
    scanf("%d", &old);
    if(old < 10 || old >= 50){
        printf("Idade inválida!");
    }else{
        i++;
    }
    printf("Qual o seu Sexo? F ou M? \n");
    scanf("%c", &sexo);
    sexo = toupper(sexo); 
    if(sexo != 'M' || sexo != 'F'){
        printf("Sexo inválido!");
    }else{
        i++;
    }
}

 
  return 0; 

}