#include <stdio.h>

int a,mn,h,l;

int main()
{
	scanf("%d",&a);
	if(a==-99)
	{
		printf("0 0\n");
		return 0;
	}
	mn=a;
	while(1)
	{
		scanf("%d",&a);
		if(a==-99) break;
		if(a<=mn) l++;
		else h++;
	}
	printf("%d %d\n",l+1, h);
}