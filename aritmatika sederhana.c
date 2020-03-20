#include <stdio.h>

double a,b;
long double c,d;

int main()
{
	scanf("%lf %lf",&a,&b);
	scanf("%Lf",&c);
	d=a/b+c;
	printf("%.2Lf\n",d);
	return 0;
}