#include <stdio.h>
#include <string.h>

using namespace std;

char a[100000][100000];
int n;

int main()
{
	scanf("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		getchar();
		scanf("%[^\n]",a[i]);
		printf("%s\n", a[i]);
	}
}