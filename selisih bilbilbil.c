#include <stdio.h>

int n,a,tmp,cek,mx;

int main()
{
	mx=0;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&a);
		cek=a-tmp;
		if(cek<0) cek*=-1;
		if(cek>mx) mx=cek;
		tmp=a;
	}
	printf("%d\n", mx);
}