#include <stdio.h>
void inc10timeofvar(int *var);
int main(){
int a = 1;
inc10timeofvar(&a);
return 0;
}

void inc10timeofvar(int *var){

int temp = *var * 10;
printf("10x value of a is : %d \n",temp);

}