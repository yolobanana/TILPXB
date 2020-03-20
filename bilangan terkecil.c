#include <stdio.h>

int a,mn;

int main()
{
	mn=2000000009;
	while(1)
	{
		scanf("%d",&a);
		if(a==-99) break;
		if(a<=mn) mn=a;
	}
	if(mn!=2000000009)
	printf("%d\n", mn);
	else printf("empty\n");
}