//pass two integer to function and get sum and avarage using pointer.
#include <stdio.h>
void updatevalueofvar(int a , int b , int *sum , float *avg){
*sum = a+b;
*avg = *sum/2;
}
int main (){
int a = 3;
int b = 6;
int sum;
float avg;
updatevalueofvar(a,b,&sum , &avg);
printf("Sum of a + b is : %d \n ",sum);
printf("avarage of a and b is : %f \n", avg);
return 0;
}