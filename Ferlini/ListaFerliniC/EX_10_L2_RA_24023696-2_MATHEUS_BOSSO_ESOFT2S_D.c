#include <stdio.h>

int main() {
    float nota, nota1, nota2, nota3, nota4, media;
    
    printf("Qual a primeiro media?\n");
    scanf("%f", &nota);
    printf("Qual a segunda media?\n");
    scanf("%f", &nota1);
    printf("Qual a terceira media?\n");
    scanf("%f", &nota2);
    printf("Qual a quarta media?\n");
    scanf("%f", &nota3);
    printf("Qual a quinta media?\n");
    scanf("%f", &nota4); 
    
    media = (nota + nota1 + nota2 + nota3 + nota4) / 5;
    
    if(media >= 60){
        printf("Parabéns a sala está aprovada!");
    }else if (media >= 40 && media < 60)
        {
            printf("A sala está de Recuperação!");
        }else
            {
                printf("A sala está Reprovada!");
            }
    
    return 0;
}