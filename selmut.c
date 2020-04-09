#include <stdio.h>

int n;

int main()
{
	scanf("%d",&n);
	if(n<=50) printf("%d\n",50-n);
	else printf("%d\n",3*(n-50));
	return 0;
}