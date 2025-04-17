/* Exerc 1 - O que uma variável de ponteiro armazena?

uma variáve de ponteiros armazena o endereço de memória para o dado que ele está apontando.

Exerc 2 - Qual o tamanho (em bytes) de uma variável de ponteiro int e de uma variável de ponteiro char?

Uma variável de ponteiro int guard 4 byts e char guarda 1 byte

Exerc 3 - Por qual motivo uma variável de ponteiro, ao ser apresentado o seu conteúdo ao usuário, pode
mostrar 0060FEF0 ou 000000000060FEF0?

arquitetura da maquina se for x32 ou x64 e o tamanho do ponteiro são os itens que podem influenciar na
quantiade de 0 que são dados anteriormente

Exerc 4 - Em qual área da memória serão alocadas as variáveis de ponteiro?

As variaveis de ponteiro são salvas em Stack, e os dados armazenados em Heap 

Exerc 5 - Em qual área da memória são alocados blocos de memória para uma alocação dinâmica?

A alocação será feito na Heap, pois se trata de uma quantidade de dado que vai ser armazenado no futuro e não
um ponteiro. 

Exerc 6 -  Considerando o programa desenvolvido em linguagem C abaixo, e sabendo que o endereço de
memória da variável x é 0060FF24 e o da variável ponteiro *ptr_x é 0060FF20, qual será o
resultado exibido ao usuário após a execução do comando printf("%d",*ptr_x); na linha5?

#include <stdio.h>
#include <stdlib.h>
int main(){
int x = 22, *ptr_x = &x;
//printf aqui
getch()
return 0;
}

a resposta exibida será o valor do endereço que ele está armazenando, portanto 22

Exerc 7 - Sobre a questão anterior, o que seria apresentado ao usuário após a execução do comando
printf("%p",ptr_x); na linha 5?

Ele estará apresentando o valor que ele está guardando no ponteiro, portanto o endereço de X que
seria 0060FF24

Exerc 8 - Ainda sobre a questão 6, o que seria apresentado ao usuário após a execução do comando
printf("%p",&ptr_x); na linha 5?

Ele estará apresentando o endereço 0060FF20, pois &ptr_x ele vai mostrar o endereço do ponteiro em si. 

Exerc 9 - Também sobre a questão 6, o que seria apresentado ao usuário após a execução do comando
printf("%p",&*ptr_x); na linha 5?

após a executação do comando seria apresentado 0060FF24 que seria o mesmo que ptr_x

Exerc 10 - Finalmente sobre a questão 6, o que seria apresentado ao usuário após a execução do
comando printf("%d", x); na linha 5?

será apresentado o valor de x que é 22 

*/

#include <stdio.h>


int main()
{
    printf("Hello World");

    return 0;
}