#include <stdio.h>

int n,p,q,a[100009];

int main()
{
	scanf("%d",&n);
	a[0]=0;
	for (int i = 1; i <= n; ++i)
	{
		scanf("%d",&p);
		a[i]=p+a[i-1];
	}
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&p);
		for (int i = 1; i <= n; ++i)
		{
			if(p<=a[i])
			{
				printf("%d\n", i);
				break;
			}
		}
	}
}