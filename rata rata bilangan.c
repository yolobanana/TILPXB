#include <stdio.h>

int n,a;
float sum;

int main()
{
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a);
		sum+=a;
	}
	sum/=n;
	printf("%.3f\n",sum );
}