#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "O nome da libunio da biblioteca";
    char *found = strstr(str, "lib");

    if(found){
        printf("Achamos o danado do %s", found);
    }

    return 0;
}