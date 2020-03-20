#include <stdio.h>

float c;
int a,b,cnt,ans;

int main()
{
	while(1)
	{
		scanf("%d",&a);
		if(a==-99) break;
		cnt++;
		scanf("%d %f",&b,&c);
		if(b*c==a) ans++;
	}
	printf("%d %d\n",cnt, ans);
}