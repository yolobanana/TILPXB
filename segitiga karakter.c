#include <stdio.h>

char a[5];
int n;

int main()
{
	scanf("%d",&n);
	scanf("%s",a);
	printf("%c\n", a[0]);
	for (int i = 2; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			if(i!=n)
			{
				if(j==1) printf("%c",a[0]);
				else if(j==i) printf("%c\n", a[2]);
				else printf(" ");
			}
			else
			{
				if(j==i) printf("%c\n", a[2]);
				else printf("%c", a[1]);
			}
		}
	}
}