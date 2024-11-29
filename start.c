#include <stdio.h>
void loop();
void ifelse();
void scanfn();
int main() {
	int integer = 1;
	char character = 'c';
	char string[] = "we are fsociety";

printf("integer=%d\n",integer);
printf("character=%c\n",character);
printf("string=%s\n",string);  

printf("Hello World!\n");
  
  printf("///");
  loop();
  ifelse(10);
  scanfn();
  return 0;
}


int fsociety(){
int x = 777;
printf("go crazy-)\n");
return x;
}

void loop(){
//looop 
int loopee = 0;

while(loopee<10){

printf("while = counter : %d\n",loopee);

loopee++;
}

loopee=0;
for(int x=0;x<10;x++){

printf("for = counter : %d\n",x);


}

}


void ifelse(int x){

if (x==10){
	printf("Access Granted ! \n");
}else{
	printf(" Access Denied %");
}

}


void scanfn(){
	int a;
	printf("Enter Account NO : ");
	scanf("%d",&a);
	printf("YOur ID - : %d\n",a);
}