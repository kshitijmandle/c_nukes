#include <stdio.h>
//basix about strings.
void printstring(){

char string[] = "fsociety";
char string2[] = {'f','s','o','c','i','e','t','y'};

for(int i = 0; i<8; i++){
	printf("%c",string2[i]);
}
printf("\n");
printf("%s\n",string);
}

void inputstring(){
	printf("Enter Name : ");
	char name[10];
	scanf("%s",name);
	printf("Hi : %s\n",name);
}

void getsandputs(){
	//why this mf is not working , take a look .
	printf("lol\n");
	char name[10];
	fgets(name,10,stdin);
	printf("HI : \n",name);

}

int main(){
printstring();
inputstring();
getsandputs();
return 0;
}