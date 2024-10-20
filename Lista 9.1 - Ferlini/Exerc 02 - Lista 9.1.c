#include <stdio.h>

int main()
{
    
    int number, i;
    number = 0;
    i = 0;
    
    while(i<101){
        number += i;
    }

    printf("O valor da soma de 1 a 100 e: %d", number);

    return 0;
}