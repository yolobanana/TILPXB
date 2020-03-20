#include <stdio.h>

long long n,ans;

int main()
{
	scanf("%lld",&n);
	while(n>0)
	{
		ans++;
		n/=10;
	}
	printf("%lld\n", ans);
}