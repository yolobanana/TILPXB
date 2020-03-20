#include <stdio.h>

int n,m,q,p;
float a[300][300];

int main()
{
	scanf("%d %d",&n,&m);
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
			scanf("%f",&a[i][j]);
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d",&p);
		if(p%m==0)
		{
			printf("%.2f\n", a[p/m][m]);
		}
		else printf("%.2f\n", a[p/m+1][p%m]);
	}
}