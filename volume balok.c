#include <stdio.h>
 
int n,p,cnt;
double a[10005],b[10005],c[10005],ans,v[10005];

int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf",&a[i],&b[i],&c[i]);
        v[i]=a[i]*b[i]*c[i];
    }
    while(1)
    {
        scanf("%d",&p);
        if(p==-9) break;
        ans+=v[p];
        cnt++;
    }
    printf("%.3lf\n",cnt,ans/cnt);
}