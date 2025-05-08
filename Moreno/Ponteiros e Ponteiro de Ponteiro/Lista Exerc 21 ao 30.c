/*
Exerc 21 - Analisando o código abaixo desenvolvido em linguagem C, apresente o resultado que será apresentado ao usuário 
após sua execução. Justifique sua resposta.
#include <stdio.h>
#include <stdlib.h>
void troca (int a, int b){
int tmp;
tmp = a;
a=b;
b=tmp;
}
//----------
int main(){
int n1 = 10, n2 =30;
troca(n1,n2);
printf("n1 = %d \n",n1);
printf("n2 = %d \n",n2);
getch();
return 0;
}

R: como se trata de uma chamada de função que trocaria valores localmente e não global ou com ponteiros os valores não alteram
portanto no print n1 = 10 e n=30 

Exerc 22 - Analisando o código abaixo desenvolvido em linguagem C, muito semelhante ao anterior, apresente o resultado que será 
apresentado ao usuário após sua execução. Justifique sua resposta.
#include <stdio.h>
#include <stdlib.h>
void troca (int *a, int *b){
int tmp;
tmp = *a;
*a=*b;
*b=tmp;
}
//----------
int main(){
int n1 = 10, n2 =30;
troca(&n1,&n2);
printf("n1 = %d \n",n1);
printf("n2 = %d \n",n2);
getch();
return 0;
}

R: Como agora sim está sendo realizado a troca dos endereços de memória de cada um e portanto os valores agora sim o print vai
ter como resposta n1 = 30 e n2 = 10 

Exerc 23 -  Considerando o programa abaixo, implemente um procedimento chamado altera que receba
como parâmetros um vetor (por referência) e seu tamanho (por valor). Este procedimento deverá
atualizar cada elemento do vetor atribuindo o dobro do seu valor.
#include <stdio.h>
#include <stdlib.h>
void mostra (int k[], int tam){
int i; 
for(i=0; i<tam; i++){
printf("%d ", k[i]);
printf("\n")
}
}
//----------
//aqui será desenvolvido o procedimento
//----------
int main(){
int vet[] = {12, 15, 14, 45};
int tam=sizeof(vet)/sizeof(int);
mostra(vet,tam);
altera(vet,tam);
mostra(vet,tam);
printf("\n \n");
system("pause");
return 0;
}

R: o que ele está solicitando é apenas um vetor que dobre o valor então algo como: 
void altera(int k[], int tam){
for(int i =0; i<tam; i++){
k[i] = k[i] * 2
}
}

e vuala deve funcionar, tamanho de acordo com o sizeof de vet e int e dobrando cada valor um por um no loop

Exerc 24 - Construa um programa em linguagem C que solicite do usuário 5 valores inteiros e os armazene em um vetor.
Posteriormente, apresente ao usuário utilizando a técnica de aritmética de ponteiro.

#include <stdio.h>
#include <stdlib.h>
int main()
int vet[5];
int *ptr= vet;
{
printf("Escreva 5 valores para o vetor: \n");
for(int i = 0; i<5;i++){
printf("escreva o %d valor:  \n", i+1);
scanf("%d", ptr + i);
}

for(int i = 0;i<5;i++){
printf("Os valores escolhidos foram %d \n", *(ptr + i))
}
}

Exerc 25 - Construa um programa em linguagem C que solicite 4 palavras com no máximo 10 caracteres
(armazenando-as em um vetor) e posteriormente apresente:
a) O tamanho do vetor (em bytes);
b) A quantidade de caracteres de cada elemento do vetor;
c) O endereço de memória do vetor;
d) O endereço de memória de cada elemento do vetor

#include <stdio.h>
#include <string.h>

int main() {
char pa[4][11];

printf("Digite 4 palavras com 10 caracteres cada \n");
for(int i =0; i<4; i++){
printf("Escreva a %d palavra  \n", i+1);
scanf("%s", pa[i]);
}
printf("A) Tamanho do vetor em bytes %d \n", sizeof(pa));
printf("B) Quantidade de caracteres de cada elemento do vetor \n");
for(int i =0; i<4;i++){
printf("Quantidade de caracter do %d palavra \n", i+1, strlen(pa[i]));
}
printf("C) Endereco de memoria do vetor: %p \n", *pa);
printf("D) Endereco de memoria de cada palavra: \n");
for(i=0;i<4;i++){
printf("Endereço palavra %d: %p", i+1, *pa[i]);
}
return 0;
}

Exerc 26 -  Com base no exercício anterior, apresente os itens c e d utilizando aritmética de ponteiro

R: 
C) Endereço de memória do vetor
printf(" endereço com ponteiro  %p \n", *pa);
D)Endereço de cada um com vetor 
for(int i=0;i<4;i++){
printf("a %d palavra: %p", i+1, *pa + i);
}

Exerc 27 - É possível utilizar um ponteiro para fazer referência a uma variável de struct? Se sim, apresente um exemplo.

R: sim é possível alocação com ptr = &struct e para tratar algum dado dentro da struct é usado -> ou (*ptr).dado [eu prefiro esse ultimo]
por exemplo ptr -> nome (ele vai acessar o dado nome dentro da struct) ou (*ptr).nome 


Exerc 28 -  Defina o termo “ponteiro de ponteiro”

trata-se de um ponteiro ao qual estaria alocando o endereço para apontar para outro ponteiro que por sua vez aponta para outro dado.
*ptr = &x
**pptr = &ptr

Exerc 29 - Considerando o programa abaixo, descreva o que será apresentado ao usuário após a execução completa do mesmo.


*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Hello World");

    return 0;
}