#include<bits/stdc++.h>
using namespace std;
double ara[1000009];
int main()
{
    int t;
    cin>>t;

    for(int j=1;j<=1000009;j++)
    {
        ara[j]=ara[j-1]+log(j);
    }

    for(int i=1;i<=t;i++)
    {
        int n,base;
        double len=0.0;
        cin>>n>>base;
        len=ara[n]/log(base);
        printf("Case %d: %d\n",i,int(len)+1);
    }
    return 0;
}
