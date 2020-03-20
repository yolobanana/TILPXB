#include <stdio.h>

double l,k,a;
double phi=3.14;
int main()
{
	scanf("%lf",&a);
	l=2*phi*a/2;
	k=phi*a/2*a/2;
	printf("%.2lf %.2lf\n",l, k);
}