#include <stdio.h>

int price,money,c,dis1,dis2;

int main()
{
	scanf("%d %d",&price,&money);
	c=price/money;
	dis1=c*money;
	dis2=(c+1)*money;
	if(price - dis1 <= dis2 - price) printf("%d\n", dis1);
	else printf("%d\n", dis2);
}