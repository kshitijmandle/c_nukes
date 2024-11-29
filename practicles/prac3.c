#include <stdio.h>

//Write a program to find out whether a student is pass or fail , 
//if its requires total 40% at least 33% in each subject to pass assume 3 subjects 
//and take marks as on form the user. 135/300*100
int main(){

int subj1,subj2,subj3;
printf("Enter marks of subject 1 : ");
scanf("%d",&subj1);

printf("Enter marks of subject 2 : ");
scanf("%d",&subj2);

printf("Enter marks of subject 3 : ");
scanf("%d",&subj3);


float percentage = subj1+subj2+subj3;
float total = percentage / 3;
if(total<40 || subj1<33 || subj2<33 || subj3<33){

printf("You are failed ! , marks are : %f  \n",total);
}else{
printf("You are Passed! with %f percentage\n", total);
}

return 0;
}