#include <stdio.h>

unsigned long long a,b;

int main()
{
	scanf("%llu %llu",&a,&b);
	printf("%llu\n%llu\n",a+b,a*b);
}