#include <stdio.h>

int a,b,c,cnt,ans;

int fpb(int x, int y)
{
	while(y!=0)
	{
		int z=x%y;
		x=y;
		y=z;
	}
	return x;
}

int main()
{
	while(1)
	{
		scanf("%d",&a);
		if(a==-99) break;
		scanf("%d %d",&b,&c);
		if(a<0 || b<0 || c<0)
		{
			cnt++;
			continue;
		}
		if(c==fpb(a,b)) ans++;
		cnt++;
//		printf("cnt %d\n", ans);
	}
	printf("%d %d\n", cnt, ans);
}