/*WAP in c to calculate the simple intrest using peramitarize function*/
#include<stdio.h>
float si(float a, float b,float c){
	return (a*b*c)/100;
}
 main(){
	float pri, rate, time;
	printf("Enter the principle: ");
	scanf("%f",&pri);
	printf("Enter the rate: ");
	scanf("%f",&rate);
	printf("Enter the time: ");
	scanf("%f",&time);
	printf("The simple Interest is:%0.2f\n",si(pri,rate,time));
}
