#include <stdio.h>

int satu,dua,tiga,mx=0;

int main()
{
	scanf("%d %d %d",&satu,&dua,&tiga);
	if(satu>=mx) mx=satu;
	if(dua>=mx) mx=dua;
	if(tiga>=mx) mx=tiga;

	if(mx==satu) printf("1");
	if(mx==dua)	printf("2");
	if(mx==tiga) printf("3");
	printf("\n");
	return 0;
}