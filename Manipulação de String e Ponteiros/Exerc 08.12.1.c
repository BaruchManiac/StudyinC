#include <stdio.h>
#include <string.h>

int main(){

    char nameinsta [] = "Hungria Otomano";
    char *found = strchr(nameinsta, 'a' );
    if(found){
        printf("Achamos o danado do %c", *found);
    }

    return 0;
}