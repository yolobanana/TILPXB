#include <stdio.h>
#include <math.h>

long long n,ans;

int main()
{
	scanf("%lld",&n);
	for (int i = 2; i <= sqrt(n); ++i)
	{
		if(i==sqrt(n) && n%i==0) ans++;
		else
		if(n%i==0) ans+=2;
	}
	printf("%lld\n",ans );
}