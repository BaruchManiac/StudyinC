#include <stdio.h>
#include <stdlib.h>

void push(int item); //empilhar
void pop(); //desempilhar
void imprimir();
int entrada_dados();

typedef struct apelido_no{
    int dado;
    struct apelido_no *proximo;
}no;

no *top=NULL;

int main()
{
    int n, opcao;
    do{
        system("cls");
        printf("\n Menu \n 1. Empilhar \n 2. Desempilhar \n 3. Imprimir \n 4. Sair");
        printf("\n Escolha uma opção (0-4): ");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
            n=entrada_dados();
            push(n); //empilhar
            break;
            case 2:
            pop(); // desempilhar
            break;
            case 3:
            imprimir();
            break;
        }
    }while (opcao!=4);
    system("pause");
    return 0;
}

void push(int item){
    printf("\n EMPILHANDO... \n");
    no *novo = malloc(sizeof(no));
    novo -> dado = item;
    novo -> proximo = top;
    top = novo;
    printf("\n Valor %d empilhado \n", novo -> dado);
}
void pop(){
    printf("\n Desempilhando... \n");
    if(top==NULL)
    printf("A Pilha esta vazia \n");
    else{
        no *temp;
        temp=top;
        top=top->proximo;
        printf("\n %d Desempilhado \n", temp->dado);
        free(temp);
    }
}
 void imprimir(){
    no *temp;
    temp=top;
    printf("\n IMPRIMINDO PILHA... \n");
    while(temp != NULL){
        printf("%d \n", temp->dado);
        temp=temp->proximo;
    }
 }
 int entrada_dados(){
    int valor;
    printf("\n Entre com valor a empilhar: ");
    scanf("%d", &valor);
    return valor;
 }