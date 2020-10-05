#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll tc;
    ll f[25];
    f[0]=1;
    for(ll i=1;i<=20;i++)
    {
        f[i]=f[i-1]*i;
    }
    scanf("%lld",&tc);
    for(ll t=1;t<=tc;t++)
    {
        stack<ll>s;
        ll x;
        scanf("%lld",&x);
        ll i=20;
        while(i>=0)
        {
            if(f[i]<=x)
            {
                x-=f[i];
                s.push(i);
            }

            i--;
        }
        printf("Case %lld: ",t);
        if(x==0)
        {
            while(s.size()!=1)
            {
                printf("%lld!+",s.top());
                s.pop();
            }
            printf("%lld!\n",s.top());
            s.pop();
        }
        else
        {
            printf("impossible\n");
        }

    }
    return 0;
}
