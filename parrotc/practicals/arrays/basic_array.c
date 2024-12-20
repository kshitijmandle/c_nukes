#include <stdio.h>
int main (){
int arr[10]; //declare array and its size
int arr2[] = {1,3,5,7,9}; //declare and init array at same time


for (int a = 0 ; a<10; a++){
arr[a] = a;
printf("Index <:%d:>> Value >  %d \n",a , arr[a]);
}


for (int a = 0; a<5; a++){
	printf("Index <: %d :> a : %d \n ",a , arr2[a]);
}
return 0;
}
