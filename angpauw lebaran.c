#include <stdio.h>

long long money;

int main()
{
	scanf("%lld",&money);
	if(money/200 != 0) printf("200 %lld\n", money/200);
	money%=200;
	if(money/100 != 0) printf("100 %lld\n", money/100);
	money%=100;
	if(money/50 != 0) printf("50 %lld\n", money/50);
	money%=50;
	if(money/20 != 0) printf("20 %lld\n", money/20);
	money%=20;
	if(money/10 != 0) printf("10 %lld\n", money/10);
	money%=10;
	if(money/5 != 0) printf("5 %lld\n", money/5);
	money%=5;
	if(money/2 != 0) printf("2 %lld\n", money/2);
	money%=2;
	if(money != 0) printf("1 %lld\n", money);
}

//200 100 50 20 10 5 2 1