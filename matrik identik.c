#include <stdio.h>

int n,rot,a[1005][1005],b[1005][1005];

void putar()
{
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			a[i][j]=b[n-j+1][i];
}

int main()
{
	scanf("%d",&n);
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d",&rot);
	if(rot==90) rot=3;
	else if(rot==180) rot=2;
	else if(rot==270) rot=1;
	else if(rot==360) rot=4;

	for (int i = 0; i < rot; ++i)
	{
		for (int i = 1; i <= n; ++i)
			for (int j = 1; j <= n; ++j)
				b[i][j]=a[i][j];
		putar();
	}

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
		{
			if(j==n) printf("%d\n", a[i][j]);
			else printf("%d ", a[i][j]);
		}
}