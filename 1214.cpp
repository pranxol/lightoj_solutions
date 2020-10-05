#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    ll T;
    scanf("%lld",&T);
    for(ll t=1;t<=T;t++)
    {
        string  a;
        ll b;
        cin>>a;
        cin>>b;
        ll j=0;
        if(a[0]=='-')
        {
            j=1;
        }
        ll d=0;
        ll len=a.size();
        while(j<len)
        {
            d=d*10+a[j]-'0';
            d=d%b;
            j++;
        }

        if(d)
            printf("Case %lld: not divisible\n",t);
        else
            printf("Case %lld: divisible\n",t);

    }

    return 0;
}
