#include <stdio.h>
int main (){
//store address of variable using pointer and get value;
int var = 69;
int *ptr = &var;

printf("address of var : %p \n",ptr);
printf("value of ptr which is pointer of var : %d \n",*ptr);
return 0;
}