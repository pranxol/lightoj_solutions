#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,tot=0;
        scanf("%d",&n);
        for(int j=1;j<=n;j++)
        {
            int a;
            scanf("%d",&a);
            if(a<0)
                continue;
            tot=tot+a;
        }
        printf("Case %d: %d\n",i,tot);
    }
    return 0;
}
