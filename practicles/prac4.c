#include <stdio.h>
/* Calculate income tax paid by employee to goverment,
as pur the stats mentioned below,
income slab
2.5l - 5l= 5%
5l - 10  = 20%
above 10 = 30%

my sal = 240000 / 100 * 5;
*/


int main(){
int sal;
printf("Enter your salary amount : \n");
scanf("%d",&sal);

if(sal<=250000){
	printf("Gareeb hai tu bhadwe\n");

}else if (sal>=250000 && sal<=500000){
	printf("Tax will be : %d \n", sal/100*20);

}else if (sal>=500000 && sal<=1000000){
	printf("Tax will be : %d \n", sal/100*30);
}else{

printf("Error!");
}

return 0;
}