#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double r;
        cin>>r;
        printf("Case %d: %.2lf\n",i,4*r*r-pi*r*r);
    }
    return 0;
}
