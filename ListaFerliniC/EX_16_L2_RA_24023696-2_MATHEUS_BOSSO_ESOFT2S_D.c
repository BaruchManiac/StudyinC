#include <stdio.h>

int main() {
    int numpessoas, escolha, total;
   

    
    printf("Informe o número de pessoas no grupo: ");
    scanf("%d", &numpessoas);

    printf("Escolha um pacote de viagem:\n");
    printf("1 - Pacote Básico (R$ 500 por pessoa)\n");
    printf("2 - Pacote Intermediário (R$ 750 por pessoa)\n");
    printf("3 - Pacote Luxo (R$ 1000 por pessoa)\n");
    scanf("%d", &escolha);
    if(escolha > 3 || escolha < 1){
        printf("Escolha inválida!");
        return 0;
    }
    if(escolha == 1){
        total = numpessoas * 500;
        printf("o valor da viagem vai ser de : %.d", total);
    }else if( escolha == 2)
        {
            total = numpessoas * 750;
            printf("o valor da viagem vai ser de : %.d", total);
            
        }else if( escolha == 3)
            {
            total = numpessoas * 1000;
            printf("o valor da viagem vai ser de : %.d", total);
                
            }

    return 0;
}