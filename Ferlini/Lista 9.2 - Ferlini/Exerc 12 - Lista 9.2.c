#include <stdio.h>
#include <ctype.h>

int main(){
    int idade, filhos, i, v, m, jovem;
    float mediahomens, mediamulheres;
    char sexo;
    int idademulher, soma, t;
    i = 0;
    v= 0;
    m = 0;
    t = 0;
    jovem = 120;

    for(i=0; i < 12; i++){
        printf("Qual a idade da %d pessoa? \n", i+1);
        scanf("%d", &idade);
        if(idade < 1 || idade > 120){
            printf("valor inválido!");
            return 0;
        }
        if(idade > jovem){
            jovem = idade;
        }
        printf("Qual o seu sexo? F ou M? \n");
        scanf("%c", &sexo);
        sexo = toupper(sexo);
        if(sexo != 'F' && sexo != 'M'){
            printf("Sexo inválido!");
            return 0;
        }
        if(sexo == 'M'){
            v++;
        }
        if(sexo == 'F'){
            m++;
        }

        printf("Quantos filhos você tem?");
        scanf("%d", &filhos); 
        if(filhos < 0 || filhos > 30){
            printf("Valor inválido!");
            return 0;
        }
        if(sexo == 'F' && filhos == 0){
            soma += idade;
            t++; 
        }

    }
    mediahomens = (v/12) * 100;
    mediamulheres = (m/12) * 100;
    idademulher = soma / t; 
    

    printf("A idade da pessoa mais jovem é %d \n", jovem);
    printf("A media de homens entrevistado é de %.2f \n", mediahomens);
    printf("A media de mulheres entrevistada é de %.2f \n", mediamulheres);
    printf("A media de idade das mulheres sem filhos é de %d \n", idademulher);

    do{
         printf("Qual a idade da %d pessoa? \n", i+1);
        scanf("%d", &idade);
        if(idade < 1 || idade > 120){
            printf("valor inválido!");
            return 0;
        }
        if(idade > jovem){
            jovem = idade;
        }
        printf("Qual o seu sexo? F ou M? \n");
        scanf("%c", &sexo);
        sexo = toupper(sexo);
        if(sexo != 'F' && sexo != 'M'){
            printf("Sexo inválido!");
            return 0;
        }
        if(sexo == 'M'){
            v++;
        }
        if(sexo == 'F'){
            m++;
        }

        printf("Quantos filhos você tem?");
        scanf("%d", &filhos); 
        if(filhos < 0 || filhos > 30){
            printf("Valor inválido!");
            return 0;
        }
        if(sexo == 'F' && filhos == 0){
            soma += idade;
            t++; 
        }

    }while(i < 12);
    mediahomens = (v/12) * 100;
    mediamulheres = (m/12) * 100;
    idademulher = soma / t; 
    

    printf("A idade da pessoa mais jovem é %d \n", jovem);
    printf("A media de homens entrevistado é de %.2f \n", mediahomens);
    printf("A media de mulheres entrevistada é de %.2f \n", mediamulheres);
    printf("A media de idade das mulheres sem filhos é de %d \n", idademulher);

    while (i< 12){
         printf("Qual a idade da %d pessoa? \n", i+1);
        scanf("%d", &idade);
        if(idade < 1 || idade > 120){
            printf("valor inválido!");
            return 0;
        }
        if(idade > jovem){
            jovem = idade;
        }
        printf("Qual o seu sexo? F ou M? \n");
        scanf("%c", &sexo);
        sexo = toupper(sexo);
        if(sexo != 'F' && sexo != 'M'){
            printf("Sexo inválido!");
            return 0;
        }
        if(sexo == 'M'){
            v++;
        }
        if(sexo == 'F'){
            m++;
        }

        printf("Quantos filhos você tem?");
        scanf("%d", &filhos); 
        if(filhos < 0 || filhos > 30){
            printf("Valor inválido!");
            return 0;
        }
        if(sexo == 'F' && filhos == 0){
            soma += idade;
            t++; 
        }
        
    }

    mediahomens = (v/12) * 100;
    mediamulheres = (m/12) * 100;
    idademulher = soma / t; 
    

    printf("A idade da pessoa mais jovem é %d \n", jovem);
    printf("A media de homens entrevistado é de %.2f \n", mediahomens);
    printf("A media de mulheres entrevistada é de %.2f \n", mediamulheres);
    printf("A media de idade das mulheres sem filhos é de %d \n", idademulher);



}