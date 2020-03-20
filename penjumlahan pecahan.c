#include <stdio.h>

int a,b,c,d,up,down,tmp;

int fpb(int x, int y)
{
	while(y!=0)
	{
		int z=x%y;
		x=y;
		y=z;
	}
	return x;
}

int main()
{
	scanf("%d %d %d %d",&a,&b,&c,&d);
	up=a*d + c*b;
	down=b*d;
	tmp=fpb(up,down);
	printf("%d %d\n",up/tmp ,down/tmp);
}