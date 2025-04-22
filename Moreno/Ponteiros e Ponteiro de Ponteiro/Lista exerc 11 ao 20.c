/*
Exerc 11 - Qual o tipo que um ponteiro deve ser declarado? Explique.

Depende, ele sempre será apresentado de acordo com a variável que ele estará apontando, se for int será int
se for char ele será char

Exerc 12 - Embora não recomendado, ao declararmos um ponteiro como void, o que será necessário para
apresentar o valor ao qual ele está apontando?

ele não irá apresentar absolutamente nada até que ele ja tenha um valor final do void para decidir 
o que será apresentado 

Exerc 13 - Analisando o código abaixo desenvolvido em linguagem C, apresente o que será apresentado
ao usuário após sua execução e justifique sua resposta.
#include <stdio.h> 
#include <stdlib.h>
int main() {
int x = 22, *ptr_x;
printf("%d \n", *ptr_x);
getch();
return 0;
}

Nada pois o ponteiro n foi inicializado.

Exerc 14 - Analisando o código abaixo desenvolvido em linguagem C, apresente o que será apresentado
ao usuário após sua execução. Justifique sua resposta
#include <stdio.h> 
#include <stdlib.h>
int main() {
int x = 22;
int *ptr_x= &x;
ptr_x=51;
printf("%d \n", *ptr_x);
getch();
return 0;
}

Ele vai dar erro pois o ptr_x=51; não está reatribuindo valor em x e sim apontando um novo local. 

Exerc 15 - Analisando o código abaixo desenvolvido em linguagem C, apresente o que será apresentado 
ao usuário após sua execução. Justifique sua resposta
#include <stdio.h> 
#include <stdlib.h>
int main() {
int x = 100;, y=200;
int *ptr= &x;
x=100;
printf("%d \n", *ptr);
ptr=&y
print("%d \n", *ptr)
getch();
return 0;
}

Ele vai no primeiro print imprimir o valor de 100 que seria o valor de X em que ele está apontando e 
no segundo print ele vai imprimir o valor de y que é 200, ja que foi alterado o ponteiro para y

Exerc 16 - Qual o objetivo da função sizeof utilizando em linguagem C? Explique e dê um exemplo.

para descobrir exatamente o valor em bytes de algo, por exemplo o int pode ter diferentes valores em 
diferentes sistemas operacionais, então para não ter problemas você aloca com base em um sizeof de int, 
evitando problemas futuros e simplificando a codificação unificada. 

Exerc 17 - Considerando o código abaixo desenvolvido em linguagem C em um compilador de 64bits,
apresente o que será apresentado ao usuário após sua execução. Justifique sua resposta
#include <stdio.h> 
#include <stdlib.h>
int main() {
int idade, *ptr=&idade;
printf("%d", sizeof(idade)+sizeof(ptr));
}

aqui temos o caso de ele printar 12, ja que idade teria o sizeof de 4 e o ponteiro por ser int tb tem peso 
de 4 assim como o que ele está apontando então é 4+4 do ponteiro + 4 da idade, portantando 4+8 = 12
*/

/*
Exerc 18 - Construa um programa em linguagem C que solicite ao usuário o valor de uma variável do tipo int
 denominada n1. Crie um ponteiro identificado por ptr (também do tipo int) e faça a referência à variável 
 n1. Posteriormente, apresente ao usuário (linha a linha): 
 a) O valor da variável n1e memória da variável n1; 
 b) O endereço de memória da variável n1; 
 c) O valor da variável ptr; 
 d) O endereço de memória da variável ptr; 
 e) O valor ao qual a variável ptr está apontando; 
 f) O endereço de memória da qual a variável ptr está apontando 
 g) O tamanho em bytes da variável n1; 
 h) O tamanho em bytes da variável ptr; 
 i) O tamanho em bytes ao qual a variável ptr está apontando
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1, *ptr=&n1;
    printf("informe um valor para n1 \n");
    scanf("%d", &n1);
    printf("A) com valor da variavel n1: %d e memoria da variavel n1 %ld \n", n1, sizeof(n1));
    printf("B) o endereço de memória da variável n1 %p \n", &n1);
    printf("C) O valor da variável ptr %d \n", *ptr);
    printf("D) O endereço da memoria da variavel ptr %p \n", &ptr);
    printf("E) O valor ao qual a variavel ptr está apontando %d \n", *ptr);
    printf("F) O Endereço de memoria da qual a variavel ptr esta apontando: %d \n", *ptr);
    printf("G) O tamanho em bytes da variável n1 %ld \n", sizeof(n1));
    printf("H) O tamanho em bytes da variável ptr %ld \n", sizeof(ptr));
    printf("I) O tamanho em bytes ao qual a variável ptr está apontando %ld", sizeof(*ptr));
    return 0;
}

/*
Exerc 19 - Apresente que tipo de informações são alocadas nas seguintes áreas da memória: 
a) Stack 
b) Heap 
c) Executable Instructions 
d) Static Variable / Automatic Variable


A) Na memória Stack é alocado os ponteiros e seus endereços, variáveis e funções, é uma memória menor e mais rápida.
B) Na memória Heap é onde é alocado os dados de malloc e calloc, sendo portanto maior e mais lenta. 
C) Na memória Executable Instructions é como o próprio nome diz onde está alocado as instruções a ser executadas, o código do programa
D) Na memória Static Variable / Automatic Variable até onde eu entendi é de variáveis locais então seria parte da Stack. 

Exerc 20 -  Um código em linguagem C possui uma variável do tipo char identificada por s de tamanho 10
com o conteúdo “Moreno” e uma segunda variável de (ponteiro do tipo char), identificada por ptr,
fazendo referência à variável s. Considerando que a variável ptr possua o valor 0060FF10, qual
será o valor apresentado ao usuário ao executar o comando printf("%p \n",&s[2]);? Justifique
sua resposta.

R: vamos por partes 
var char s[10] = Moreno, *ptr = &s;
ptr == &s[0] = 0060FF10 //   char = 1
&s[2] = 0060FF12

portanto o valor apresentado ao printar é de 0060FF12, visto que cada char é 1 byte e inicia-se com 0, portanto &s[2] = 0060FF12

*/
