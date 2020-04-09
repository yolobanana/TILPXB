#include <stdio.h>

int n;
float ans;

int main()
{
	scanf("%d",&n);
	n%=100;
	n/=10;
	ans=n/3.0;
	printf("%.2f\n",ans);	
}