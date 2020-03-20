#include <stdio.h>

float a,b,c,avg;

int main()
{
	scanf("%f %f %f",&a,&b,&c);
	avg=(a+b+c)/3;
	if(avg<30) printf("%.2fKURANG",avg );
	else if(avg<60) printf("%.2fCUKUP",avg );
	else printf("%.2fBAIK", avg );
}