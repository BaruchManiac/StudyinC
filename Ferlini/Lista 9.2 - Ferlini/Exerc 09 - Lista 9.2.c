#include <stdio.h>
#include <ctype.h>

int main(){

    char name, sex;  
    int old, i, sum, m;
    float media;
    i = 0; 
    m = 0; 

    for(i=0; i < 1; i++){
        i--;
        printf("Qual o seu nome? \n");
        scanf("%s",&name);
        printf("Qual a sua idade? \n");
        scanf("%d", &old);
        printf("Qual o seu sexo? F ou M? \n");
        scanf("%c", &sex);
        sex = toupper(sex);
        if(sex == 'F'){
            sum += old;
            m++;
        }
        printf("Deseja continuar a entrevistar mais pessoas? aperte 0 \n");
        printf("Deseja Parar? aperte qualquer outro número \n");
        scanf("%d", &i);
    }
    media = sum / m;

    printf("A média de idade das mulheres é %.2f", media); 

    do{ 
        i--;
        printf("Qual o seu nome? \n");
        scanf("%s",&name);
        printf("Qual a sua idade? \n");
        scanf("%d", &old);
        printf("Qual o seu sexo? F ou M? \n");
        scanf("%c", &sex);
        sex = toupper(sex);
        if(sex == 'F'){
            sum += old;
            m++;
        }
        printf("Deseja continuar a entrevistar mais pessoas? aperte 0 \n");
        printf("Deseja Parar? aperte qualquer outro número \n");
        scanf("%d", &i);

    }while(i < 1);

    media = sum / m;

    printf("A média de idade das mulheres é %.2f", media); 

    while(i < 1){
        i--;
        printf("Qual o seu nome? \n");
        scanf("%s",&name);
        printf("Qual a sua idade? \n");
        scanf("%d", &old);
        printf("Qual o seu sexo? F ou M? \n");
        scanf("%c", &sex);
        sex = toupper(sex);
        if(sex == 'F'){
            sum += old;
            m++;
        }
        printf("Deseja continuar a entrevistar mais pessoas? aperte 0 \n");
        printf("Deseja Parar? aperte qualquer outro número \n");
        scanf("%d", &i);

    }

    media = sum / m;

    printf("A média de idade das mulheres é %.2f", media); 


    return 0;
}