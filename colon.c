#include <stdio.h>
#include <string.h>

char a[10000];
int mid,cek=0;
int n;

int wht(int x)
{
	for (int i = 0; i < x; i++)
	{
//		printf("%c %c\n", a[i],a[i+mid]);
		if(a[i]!=a[i+mid+1]) return 0;
	}
	return 1;
}

int main()
{
	scanf("%d",&n);
	for (int j = 0; j < n; j++)
	{
		getchar();
		cek=0;
		scanf("%[^\n]",a);
		mid=(strlen(a)+1)/2-1;
		for (int i = 0; i < strlen(a); i++)
		{
			if(a[i]==':')
			{
				if(mid==i)
				{
					cek=1;
					if(strlen(a)%2==0)
					{
						printf("R\n");
						break;
					}
					if(wht(i-1))printf("S\n");
					else printf("D\n");
					break;
				}
				else if(i<mid)
				{
					printf("R\n");
					cek=1;
					break;
				}
				else if(i>mid)
				{
					printf("L\n" );
					cek=1;
					break;
				}
			}
		}
		if(!cek)
		printf("N\n");
	}
}