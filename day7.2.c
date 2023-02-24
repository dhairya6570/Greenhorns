#include<stdio.h>

int main(){
	
	int a ;
	int b ;
	
	printf("Enter Number of A : ");
	scanf("%d",&a);
	
    printf("Enter Number of B : ");
	scanf("%d",&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("Exchange Number of A and B : \n");
	
	printf("A : %d\n",a);
	printf("B : %d",b);
	
	return 0;
}
