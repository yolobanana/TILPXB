#include <stdio.h>

int n,naik,turun,sel=0,a[1000009],mx=0;

int main()
{
	naik=turun=1;
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
		scanf("%d",&a[i]);
	for (int i = 0; i < n; ++i)
	{
		if(a[i]>=a[i-1] && naik)
		{
			naik=1; turun=0;
			sel+=a[i]-a[i-1];
		}
		else if(a[i]>=a[i-1] && turun)
		{
			turun=0; naik=1;
			if(sel>=mx) mx=sel;
			sel=a[i]-a[i-1];
		}
		else if(a[i]<=a[i-1] && turun)
		{
			turun=1; naik=0;
			sel+=a[i-1]-a[i];
		}
		else if(a[i]<=a[i-1] && naik)
		{
			naik=0; turun=1;
			if(sel>=mx) mx=sel;
			sel=a[i-1]-a[i];
		}
//		printf("sel %d\n", sel);
	}
	printf("%d\n", mx);
}