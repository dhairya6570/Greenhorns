#include<stdio.h>

int main (){
	
	int a , b , c , d , e , f ;
	
	printf("Base Salary : ");
	scanf("%d",&a);
	
	printf("HRA : ");
	scanf("%d",&b);
	
	printf("DA : ");
	scanf("%d",&c);
	
	printf("TA : ");
	scanf("%d",&d);
	
	printf("Medical : ");
	scanf("%d",&e);
	
	f = a + (a*b)/100 + (a*c)/100 + (a*d)/100 + (a*e)/100 ;
	
	printf("Gross Salary : %d",f);
	
	return 0;
}
