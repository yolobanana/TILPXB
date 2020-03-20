#include <stdio.h>

char ch;

int main()
{
	scanf("%c",&ch);
	if(ch=='a' || ch=='A') printf("4\n");
	else if(ch=='b' || ch=='B') printf("3\n");
	else if(ch=='c' || ch=='C') printf("2\n");
	else if(ch=='d' || ch=='D') printf("1\n");
	else if(ch=='e' || ch=='E') printf("0\n");
	else printf("-1\n");
}