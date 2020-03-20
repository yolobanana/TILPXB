#include <stdio.h>
 
long long a,b,c,one,sec,third;
 
int main()
{
    scanf("%lld %lld %lld",&a,&b,&c);
    one=a/b;
    sec=a/c;
    third=(a)/(c*b);
    printf("%lld\n", one+sec-third);
}