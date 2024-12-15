//print value of i using pointer to pointer;
#include <stdio.h>
int main(){
int var = 69;
int *ptr = &var;
int **ptrtoptr = &ptr;
printf("value of ptrtoptr is : %d \n",**ptrtoptr);
return 0;
}