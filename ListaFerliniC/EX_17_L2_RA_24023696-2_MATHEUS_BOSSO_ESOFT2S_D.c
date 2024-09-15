#include <stdio.h>

int main()
{
    int pedido, inter;
    float value, codigo, codigo2;
    printf("Qual o numero do pedido?");
    scanf("%d", &pedido);
    printf("Qual o numero interno do dia?");
    scanf("%d", &inter);
    printf("Qual o valor pago?");
    scanf("%f", &value);
    
    codigo = ((pedido / 3.14) * inter) * (value *100);
    
    printf("o codigo de rastreio e %2.f \n",codigo);
    printf("Qual codigo de rastreio?");
    scanf("%f", &codigo2);
    if(codigo == codigo2){
        printf("Código de rastreio correto! encomenda se encontra em: linkpipipipopopo");
        return 0;
    }else
        {
            printf("Código incorreto!");
        }

    return 0;
}    

    