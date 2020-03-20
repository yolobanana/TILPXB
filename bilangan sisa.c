#include <stdio.h>

int n,a,b,c,ans;

int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a<=0 || b<=0) continue;
		if(a%b==c) ans++;
	}
	printf("%d\n", ans);
}