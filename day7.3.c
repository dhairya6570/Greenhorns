#include<stdio.h>

int main (){
	
	float a ;
	float b ;
	
	printf("Temperature in Degree Celsius : ");
	scanf("%f",&a);
	
	b = a*9/5 + 32  ;
	
	printf("Temperature in Degree Fahrenheit : %.1f",b);
	
	return 0;
}
