#include <stdio.h>

int n;
double a,sum,mn,mx;

int main()
{
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%lf",&a);
		sum+=a;
		if(a<=mn) mn=a;
		if(a>=mx) mx=a;
	}
	printf("%.2lf %.2lf %.2lf\n",mn, mx, sum/n );
}