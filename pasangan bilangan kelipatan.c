#include <stdio.h>

int n,a,b,ans;

int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&a, &b);
		if(a%b==0 || b%a==0) ans++;
	}
	printf("%d\n", ans);
}