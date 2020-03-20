#include <stdio.h>
#include <string.h>

char a[500];
int cnt;

int main()
{
	int n;
	int ans=0;
	scanf("%d",&n);
	while(n--)
	{
		cnt=0;
		//printf("woiii\n");
		getchar();
		scanf("%[^\n]",a);
		for (int i = 0; i < strlen(a); ++i)
		{
			if(a[i]==' ')
			{
				if (cnt>=4)
					ans++;
				cnt=0;
			}
			else cnt++;
		}
		if(cnt>=4)
		{
			ans++;
			cnt=0;
		}
	}
	printf("%d\n", ans);
}