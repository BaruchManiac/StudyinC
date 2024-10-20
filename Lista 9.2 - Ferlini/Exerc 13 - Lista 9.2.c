#include <stdio.h>

int main(){

    char name[50];
    char * zodiaco[] = {"Aquário", " peixes", "Áries", "Touro", "Gemeos", "Cancer", "Leao", "Virgem", "Libra", "Escorpiao",
     "Sagitario", "Capricornio"};
    int day, month, realday;
    int i,v;
    v = 0;
    i = 0; 



    printf("Qual o seu nome?\n");
    scanf("%s", name);

    for(i = 0; i < 2; i++){
        printf("Qual dia você nasceu? \n");
        scanf("%d", &day);
        if(day > 31){
            printf("Dia não existente");
            return 0;
        }
        printf("Qual mês você nasceu? \n");
        scanf("%d", &month);
        if(month > 12){
            printf("Mês não existente");
            return 0;
        }else if(month == 2 && day >= 29){
            printf("Data inválida");
            return 0;
        } 

        if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        v = 0; 
        } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)){
        v = 1; 
         } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)){
        v = 2; 
        } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)){
        v = 3; 
        } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)){
        v = 4; 
         } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)){
        v = 5; 
        } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)){
        v = 6; 
        } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)){
        v = 7; 
        } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)){
        v = 8; 
        } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)){
        v = 9; 
        } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)){
        v = 10; 
        } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)){
        v = 11; 
        }
        i++;
    }

    printf("Parabéns o seu Zodiaco é %s", zodiaco[v]);

    while(i < 2){
        printf("Qual dia você nasceu? \n");
        scanf("%d", &day);
        if(day > 31){
        printf("Dia não existente");
        return 0;
        }
        printf("Qual mês você nasceu? \n");
        scanf("%d", &month);
        if(month > 12){
        printf("Mês não existente");
        return 0;
        }else if(month == 2 && day >= 29){
        printf("Data inválida");
        return 0;
        } 

        if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        v = 0; 
        } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)){
        v = 1; 
         } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)){
        v = 2; 
        } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)){
        v = 3; 
        } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)){
        v = 4; 
         } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)){
        v = 5; 
        } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)){
        v = 6; 
        } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)){
        v = 7; 
        } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)){
        v = 8; 
        } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)){
        v = 9; 
        } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)){
        v = 10; 
        } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)){
        v = 11; 
        }
        i++;

    }
    printf("Parabéns o seu Zodiaco é %s", zodiaco[v]);

    do{
        printf("Qual dia você nasceu? \n");
        scanf("%d", &day);
        if(day > 31){
        printf("Dia não existente");
        return 0;
        }
        printf("Qual mês você nasceu? \n");
        scanf("%d", &month);
        if(month > 12){
        printf("Mês não existente");
        return 0;
        }else if(month == 2 && day >= 29){
        printf("Data inválida");
        return 0;
        } 

        if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        v = 0; 
        } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)){
        v = 1; 
         } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)){
        v = 2; 
        } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)){
        v = 3; 
        } else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)){
        v = 4; 
         } else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)){
        v = 5; 
        } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)){
        v = 6; 
        } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)){
        v = 7; 
        } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)){
        v = 8; 
        } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)){
        v = 9; 
        } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)){
        v = 10; 
        } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)){
        v = 11; 
        }
        i++;

    }while(i < 2);

    printf("Parabéns o seu Zodiaco é %s", zodiaco[v]);

}