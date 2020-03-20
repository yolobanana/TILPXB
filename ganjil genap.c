#include <stdio.h>

int n,a,odd,even;

int main()
{
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		if(a<0) a*=-1;
		if(a%2==0) even++;
		else odd++;
	}
	printf("%d %d\n",even, odd);
}