#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        int n;
        cin>>n;
        printf("Case %d:\n",i);
        for(int j=1;j<=n;j++)
        {
            int b,e;
            cin>>b>>e;
            if(b>=x1&&b<=x2&&e>=y1&&e<=y2)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
