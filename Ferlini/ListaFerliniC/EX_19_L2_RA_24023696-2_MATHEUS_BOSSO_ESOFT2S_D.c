#include <stdio.h>

int main()
{
    float temperatura, umidade, sensat;
    printf("Qual a temperatura em Celcius?");
    scanf("%f", &temperatura);
    printf("Qual a umidade relativa em porcentagem?");
    scanf("%f", &umidade);
    
    sensat = temperatura - ((0.55 - (0.0055 * umidade) * (temperatura - 14.5) ) / 1.8);
    
    printf("Sensacao terminca e: %.2f", sensat);

    return 0;
}
    