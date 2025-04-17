#include <stdio.h>
#include <string.h>

int main(){

    char name1 [] = "Rick Riordam";
    char name2 [] = "Natalia Trust";

    if(strcmp(name1, name2) < 0){
        printf("%s veio primeiro que %s",name1, name2);
    }else{
        printf("%s na verdade veio primeiro que %s",name2, name1);
    }
 
    return 0;
}