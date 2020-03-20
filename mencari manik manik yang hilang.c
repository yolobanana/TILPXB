#include <stdio.h>
#include <string.h>

int n,p[1005],cek;
char a[1005][50],c[1005];

int main()
{
	cek=0;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		getchar();
		scanf("%s %d",a[i],&p[i]);
	}
	while(1)
	{
		getchar();
		scanf("%s",c);
//		printf("cccc %s", c);
		if(c[0]=='S' && c[1]=='T' && c[2]=='O' && c[3]=='P') break;
		for (int i = 0; i < n; ++i)
		{
			p[i]--;
			for (int j = 0; j < strlen(a[i]); ++j)
			{
				if(c[j]!=a[i][j])
				{
					p[i]++;
					break;
				}
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if(p[i]>0)
			{
				printf("%s %d\n",a[i], p[i]);
				cek=1;
			}
	}
	if(!cek) printf("LENGKAP\n");
}