#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[40],b[40];
    for(int tc=1;tc<=t;tc++)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        int n,siz=0;
        cin>>n;
        while(n!=0)
        {
            int rem=n%2;
            n=n/2;
            if(rem==1)
                a[siz]=1;
            else a[siz]=0;
            siz++;
        }
        int i=0,j=1,one=0;
        while(1)
        {
            if(a[i]==1&&a[j]==0)
                break;
            if(a[i]==1)
                one++;
            i++;
            j++;
        }
        for(int k=0;k<one;k++)
        {
            b[k]=1;
        }
        b[i]=0;
        b[j]=1;
        for(int k=j+1;k<=siz;k++)
        {
            b[k]=a[k];
        }
        long long res=0,mul=1;
        for(int i=0;i<=siz+1;i++)
        {
            res=res+b[i]*mul;
            mul=mul*2;
        }
        printf("Case %d: %lld\n",tc,res);
    }
    return 0;
}
