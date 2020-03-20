#include <stdio.h>

long long p;
int d,ans;

int main()
{
	scanf("%d %lld",&d,&p);
	while(p>0)
	{
		if(p%10==d) ans++;
		p/=10;
	}
	if(ans!=0) printf("%d\n",ans );
	else printf("tidak ada\n");
}