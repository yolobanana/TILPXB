#include <stdio.h>

int a,b,c,d,mx;

int main()
{
	mx=0;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	a=a-b; if(a<0) a*=-1;
	if((a)>=mx) mx=abs(a);
	b-=c; if(b<0) b*=-1;
	if((b)>=mx) mx=abs(b);
	c-=d; if(c<0) c*=-1;
	if((c)>=mx) mx=abs(c);
	printf("%d\n",mx );
}