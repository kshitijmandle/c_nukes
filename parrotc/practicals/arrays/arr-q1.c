#include <stdio.h>
//reverse the array
void reverse(int *ptr , int array_size){
	int temp;	
	for(int i = 0; i<array_size/2; i++){
	temp = ptr[i];
	ptr[i] = ptr[array_size-i-1];
	ptr[array_size-i-1] = temp; 
}		
}
int main (){
int array[] = {100,2,3,4,5,6,7};
reverse(array,7);
for(int i = 0 ; i<7;i++){
	printf("%d",array[i]);

}
return 0;
}
