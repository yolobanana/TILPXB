#include <stdio.h>

int n,m,a[100][100];

int main()
{
	scanf("%d %d",&n,&m);
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
			scanf("%d",&a[i][j]);
	for (int i = 1; i <= m; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if(j==n) printf("%d\n", a[n-j+1][i]);
			else printf("%d ", a[n-j+1][i]);
		}
	}
}