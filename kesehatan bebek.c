#include <stdio.h>

int a,mn,mx;

int main()
{
	mx=0; mn=2000000009;
	while(1)
	{
		scanf("%d",&a);
		if(a==0)
		{
			printf("%d %d\n",mn, mx);
			mx=0; mn=2000000009;
			continue;
		}
		if(a==-1) break;
		if(a>mx) mx=a;
		if(a<mn) mn=a;
	}
	printf("%d %d\n",mn,mx);
}