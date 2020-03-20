#include <stdio.h>

long long a,b,c,ans;

int main()
{
	scanf("%lld %lld %lld",&a,&b,&c);
	ans+=(a*3600)+(b*60)+c;
	scanf("%lld %lld %lld",&a,&b,&c);
	ans-=((a*3600)+(b*60)+c);
	if(ans<0) ans*=-1;
	printf("%lld",ans );
}