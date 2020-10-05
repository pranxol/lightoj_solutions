#include<bits/stdc++.h>
using namespace std;

int main()
{
    double pi =acos(-1);
    int T;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        double v,r1,r2,h,p;
        scanf("%lf%lf%lf%lf",&r1,&r2,&h,&p);
        r1=r2+((r1-r2)*p)/h;
        v=(pi*p*(r1*r1+r1*r2+r2*r2))/3.0;
        printf("Case %d: %lf\n",t,v);
    }
    return 0;
}
