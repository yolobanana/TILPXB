#include <stdio.h>
#include <math.h>
 
long long a,b,c;
double d;
 
int main()
{
    scanf("%lld %lld %lld",&a,&b,&c);
    d=sqrt(b*b-4*a*c);
    printf("%.2f %.2f\n",(-b+d)/(2.0*a),(-b-d)/(2.0*a) );
}