#include <stdio.h>
  
long long a,b,c,d,e,f,ans,ans1,ans2;
  
int main()
{
    scanf("%lld %lld %lld",&a,&b,&c);
    scanf("%lld %lld %lld",&d,&e,&f);
    ans-=(a*3600)+(b*60)+c;
    ans+=((d*3600)+(e*60)+f);
    if(ans<0) ans+=86400;
    a=ans/3600;
    ans%=3600;
    b=ans/60;
    ans%=60;
    c=ans;
    printf("%lld %lld %lld\n", a,b,c);
}