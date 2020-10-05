#include<bits/stdc++.h>
using namespace std;
int a[1005],res[1005];
bool cmp(int c,int d )
{
    if(a[c]<a[d])
        return true;
    else if(a[c]==a[d])
        return c>d;
    return false;
}
int main()
{
    int t;
    cin>>t;
    int n=1000;

        int siz=sqrt(1000)+1;

        for(int i=1;i<=n;i++)
        {
            for(int j=i; j<=n; j=j+i)
            {
                a[j]++;
            }
        }
        //cout<<a[997]<<endl;
        for(int i=1;i<=1000;i++)
        {
            res[i]=i;
        }
        sort(res+1,res+1000+1,cmp);
    for(int k=1;k<=t;k++)
    {
        int sf;
        cin>>sf;
        cout<<"Case "<<k<<": "<<res[sf]<<endl;
    }

    return 0;
}
