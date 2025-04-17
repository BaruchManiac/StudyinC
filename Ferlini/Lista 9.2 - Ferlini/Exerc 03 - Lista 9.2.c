#include <stdio.h>

int main()
{
 int i;

 for (i = 30; i > 5; i--){
    printf("%d \n", i);
 }

do{
i = 30;
i--;
printf("%d \n", i);

}while(i > 5);

while(i > 5){
    i = 30;
    i++;
    printf("%d \n", i);
}

  return 0; 

}