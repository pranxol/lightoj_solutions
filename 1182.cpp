#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int n;
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);
        int cnt=0;
        while(n!=0)
        {
            int rem=n%2;
            n=n/2;
            if(rem==1)
                ++cnt;
        }
        if (cnt%2==1)
            printf("Case %d: odd\n",i);
        else
            printf("Case %d: even\n",i);
    }
    return 0;
}
