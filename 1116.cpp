#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc;
    cin>>tc;
    for(ll t=1;t<=tc;t++)
    {
        ll w;
        cin>>w;
        printf("Case %d: ",t);
        if(w%2==1)
        {
            printf("Impossible\n");
        }
        else
        {
            ll m=1;
            while(w%2==0)
            {
                w=w/2;
                m=m*2;
            }
            printf("%lld %lld\n",w,m);
        }
    }
    return 0;
}
