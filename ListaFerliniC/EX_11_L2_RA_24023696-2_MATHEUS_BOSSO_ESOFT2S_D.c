#include <stdio.h>


int main() {
    int medida1, medida2, medida3;
    
    printf("Imforme a primeira medida do triangulo\n");
    scanf("%d", &medida1);
    printf("Imforme a segunda medida do triangulo\n");
    scanf("%d", &medida2);
    printf("Imforme a terceira medida do triangulo\n");
    scanf("%d", &medida3);
    if(medida1 == medida2 && medida2 == medida3){
        printf("O triangulo é equilátero");
    }else if(medida1 != medida2 && medida2 != medida3 && medida1 != medida3)
        {
            printf("O triangulo é Escaleno");
        }else
            {
                printf("O triangulo é Isósceles");
            }
    
    
    return 0;
}