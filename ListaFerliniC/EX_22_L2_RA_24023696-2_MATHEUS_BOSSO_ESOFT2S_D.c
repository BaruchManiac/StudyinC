#include <stdio.h>

int main() {
    int quantidade;
    float valor, valorT, descQ, descC, valor1;
    char categoria;
    
    valorT = 0;

    printf("Digite a quantidade de livros: ");
    scanf("%d", &quantidade);

    printf("Digite o preço unitário do livro: ");
    scanf("%f", &valor);

    printf("Digite a categoria do livro (A, B, C): ");
    scanf(" %c", &categoria);

    
    if(categoria == 'A') {
        descC = 0.85;
    } else if(categoria == 'B') {
        descC = 0.90;
    } else if(categoria == 'C') {
        descC = 0.95;
    } else {
        printf("Categoria inexistente!\n");
        return 0; 
    }

    
    if(quantidade >= 30) {
        descQ = 0.80;
    } else if(quantidade > 10 && quantidade < 30) {
        descQ = 0.90;
    } else {
        descQ = 1.0;
    }

    valor1 = valor * quantidade;
    valorT = valor1 * descC * descQ;

    printf("Parabéns! O valor total foi de %.2f\n", valor1);
    printf("Novo valor com desconto: %.2f\n", valorT);

    return 0;
}

