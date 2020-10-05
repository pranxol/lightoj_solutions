#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int lift ,ami;
        cin>>ami>>lift;
        int res;
        res=abs(lift-ami)*4+3+3+3+10+ami*4;
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
