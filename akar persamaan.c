#include <stdio.h>

float a,b,c,d;

int main()
{
	scanf("%f %f %f",&a,&b,&c);
	d=b*b - 4*a*c;
	if(d>0) printf("2\n");
	else if(d==0) printf("1\n");
	else printf("0\n");
}