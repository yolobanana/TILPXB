#include <stdio.h>

long long n,m,k,s,po,mx,cpk,summ,sumk;

int main()
{
	int cek;
	cek=0;
	po=0;
	scanf("%lld",&n);
	for (int i = 1; i <=n ; i++)
	{
		scanf("%lld %lld %lld",&m,&k,&s);
		summ+=m;
		sumk+=k;
		if(m+k+s!=n-1) cek=1;
		if(m*3+s==po)
		{
			cpk=po;
		}
		if(m*3+s>po)
		{
			mx=i;
			po=m*3+s;
		}
	}
	if(cek || cpk==po || summ!=sumk)
	{
		printf("-1\n");
		return 0;
	}
	printf("%lld %lld\n",mx,po);
}