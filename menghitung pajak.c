#include <stdio.h>

long long a;
float b;
double sum,tax;

int main()
{
	scanf("%lld %f",&a,&b);
	sum+=a*b;
	scanf("%lld %f",&a,&b);
	sum+=a*b;
	scanf("%lld %f",&a,&b);
	sum+=a*b;
	scanf("%lf",&tax);
	tax*=0.01;
	tax*=sum;
	sum-=tax;
	printf("%.2lf %.2lf\n",tax,sum);
}