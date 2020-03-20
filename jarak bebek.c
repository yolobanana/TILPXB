#include <stdio.h>
#include <math.h>

int x1,x2,xd,yz,y2,yd;
float dis1,dis2;

int main()
{
	scanf("%d %d %d %d %d %d",&x1,&yz,&x2,&y2,&xd,&yd);
	dis1=sqrt((xd-x1)*(xd-x1) + (yd-yz)*(yd-yz));
	dis2=sqrt((xd-x2)*(xd-x2) + (yd-y2)*(yd-y2));
	if(dis1<dis2) printf("1\n");
	else if(dis2<dis1)printf("2\n");
	else printf("12\n");
}