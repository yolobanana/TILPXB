#include <stdio.h>

int a,b,cnt,mx,dis;

int main()
{
	mx=0;
	while(1)
	{
		scanf("%d",&a);
		if(a==-99) break;
		scanf("%d",&b);
		cnt++;
		dis=a-b;
		if(dis<0) dis*=-1;
		if(dis>mx) mx=dis;
	}
	printf("%d %d\n",cnt, mx);
}