#include <stdio.h>

int m,n,cnt;

int main()
{
	cnt=0;
	scanf("%d %d",&m,&n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(j==n-1) printf("%d",cnt%10);
			else printf("%d ",cnt%10);
			cnt++;
		}
		printf("\n");
	}
}