#include <stdio.h>
void fun(int *array , int array_size){
	for(int i = 0; i < array_size; i++){
	if(array[i]>0){
	printf("%d is positive number at index %d\n", array[i],i);	
	}else{
	printf("%d is negative number at index %d\n",array[i],i);	
	}
}

}
int main(){
int array[] = {2,3,4,5,9,-3,-9,-4,10};
fun(array,9);
return 0;
}