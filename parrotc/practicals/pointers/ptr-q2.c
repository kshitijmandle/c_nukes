
//print address of i and pass same variable i to function and print address again , check it is same ? if same why?.
//answer is not same , because we passed copy of i , varible a has own address in memory.
#include <stdio.h>
void pointerfnc(int a);
int main (){
int i = 69;
int *ptr = &i;
printf("Address of i is : %p \n",ptr);
pointerfnc(i);
return 0;
}


void pointerfnc(int a){
printf("Address of var a (i) is : %p \n",&a);
}