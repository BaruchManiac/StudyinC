#include <stdio.h>

int main(){

    float nota1, nota2, media, mediasala, porcentaprov, porcentreprov;
    int i,v;
    char name[50];

    i = 1; 
    v = 0;

    for(i=1; i < 33 ; i++){
        printf("Qual o nome do %d aluno? \n", i);
        scanf("%s", name);
        printf("Qual a primeira nota? \n");
        scanf("%f", &nota1);
        if(nota1 > 10 || nota1 < 0){
            printf("valor inválido! \n");
            return 0;
        }
        printf("Qual a segunda nota? \n");
        scanf("%f", &nota2);
        if(nota2 > 10 || nota2 < 0){
            printf("valor inválido! \n");
            return 0;
        }

        media = (nota1 + nota2) / 2;
        if (media >= 6){
            v++;
        }

    }
    mediasala = media / v; 
    porcentaprov = (v / 32) * 100;
    porcentreprov = ((32 - v)/ 32 ) * 100;
    printf("A media da sala é %.2f \n", mediasala);
    printf("A porcentagem de aprovados é %.2f \n", porcentaprov);
    printf("A porcentagem de reprovador é %.2f \n", porcentreprov);

    do{
        printf("Qual o nome do %d aluno? \n", i);
        scanf("%s", name);
        printf("Qual a primeira nota? \n");
        scanf("%f", &nota1);
        if(nota1 > 10 || nota1 < 0){
            printf("valor inválido! \n");
            return 0;
        }
        printf("Qual a segunda nota? \n");
        scanf("%f", &nota2);
        if(nota2 > 10 || nota2 < 0){
            printf("valor inválido! \n");
            return 0;
        }

        media = (nota1 + nota2) / 2;
        if (media >= 6){
            v++;
        }

    }while(i<33);

    mediasala = media / v; 
    porcentaprov = (v / 32) * 100;
    porcentreprov = ((32 - v)/ 32 ) * 100;
    printf("A media da sala é %.2f \n", mediasala);
    printf("A porcentagem de aprovados é %.2f \n", porcentaprov);
    printf("A porcentagem de reprovador é %.2f \n", porcentreprov);

    while(i<33){
        printf("Qual o nome do %d aluno? \n", i);
        scanf("%s", name);
        printf("Qual a primeira nota? \n");
        scanf("%f", &nota1);
        if(nota1 > 10 || nota1 < 0){
            printf("valor inválido! \n");
            return 0;
        }
        printf("Qual a segunda nota? \n");
        scanf("%f", &nota2);
        if(nota2 > 10 || nota2 < 0){
            printf("valor inválido! \n");
            return 0;
        }

        media = (nota1 + nota2) / 2;
        if (media >= 6){
            v++;
        }

    }
    mediasala = media / v; 
    porcentaprov = (v / 32) * 100;
    porcentreprov = ((32 - v)/ 32 ) * 100;
    printf("A media da sala é %.2f \n", mediasala);
    printf("A porcentagem de aprovados é %.2f \n", porcentaprov);
    printf("A porcentagem de reprovador é %.2f \n", porcentreprov);




    
    return 0;
}