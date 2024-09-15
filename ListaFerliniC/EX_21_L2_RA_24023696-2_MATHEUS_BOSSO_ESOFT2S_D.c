#include <stdio.h>
#include <math.h>

int main() {
    float valorEmprestimo, taxaJuros, prestacao, real;
    int numeroParcelas;

    printf("Digite o valor do empréstimo: ");
    scanf("%f", &valorEmprestimo);

    printf("Digite a taxa de juros mensal (em porcentagem): ");
    scanf("%f", &taxaJuros);

    printf("Digite o número de parcelas: ");
    scanf("%d", &numeroParcelas);
    
    taxaJuros = (taxaJuros / 100) + 1;
    prestacao = (valorEmprestimo / numeroParcelas) * taxaJuros; 
    real = prestacao * numeroParcelas;

    printf("O valor da prestação mensal é: %.2f\n", prestacao);
    printf("O valor total pago do emprestivo vai ser de %.2f",real);

    return 0;
}