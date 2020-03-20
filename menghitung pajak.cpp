#include <stdio.h>
using namespace std;

int a,b;
double sum,tax;

int main()
{
	int tc=3;
	while(tc--)
	{
		scanf("%d %d",&a,&b);
		sum+=a*b;
	}
	scanf("%lf",&tax);
	printf("%.2lf %.2lf\n",sum,sum*(100-tax)/100);
}
