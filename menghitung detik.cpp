#include <stdio.h>

int jam,menit,detik,sum;

int main()
{
	scanf("%d %d %d",&jam,&menit,&detik);
	sum+=(jam*3600)+(menit*60)+detik;
	scanf("%d %d %d",&jam,&menit,&detik);
	sum-=((jam*3600)+(menit*60)+detik);
	if(sum<0) sum*=-1;
	printf("%d\n",sum);
}
