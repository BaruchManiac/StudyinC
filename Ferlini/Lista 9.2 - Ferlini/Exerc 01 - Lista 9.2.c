#include <stdio.h>

int main()
{
    char name[3];
    int idade[3];
    int i;
    i = 0;

    for(i = 0; i < 3; i++){

        printf("Qual o nome da %d pessoa? \n", i + 1);
        scanf("%s", &name[i]);
        printf("Qual a sua idade? \n");
        scanf("%d", &idade[i]);

    }

    while(i < 3){
        i++;
        printf("Qual o nome da %d pessoa? \n", i + 1);
        scanf("%s", &name[i]);
        printf("Qual a sua idade? \n");
        scanf("%d", &idade[i]);
    }

    do{
        printf("Qual o nome da %d pessoa? \n", i + 1);
        scanf("%s", &name[i]);
        printf("Qual a sua idade? \n");
        scanf("%d", &idade[i]);
        i++;
    }while(i<3);

  return 0; 

}