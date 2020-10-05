#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    int tc;
    scanf("%d",&tc);
    for(int t=1;t<=tc;t++)
    {
        int n,m;
        scanf("%d%d",&n,&m);
        int a[105];
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }

        char c;
        for(int i=1;i<=m;i++)
        {
            getchar();
            scanf("%c",&c);
            if(c=='S')
            {
                int x;
                scanf("%d",&x);
                for(int j=1;j<=n;j++)
                {
                    a[j]=a[j]+x;
                }
            }
            else if(c=='M')
            {
                int x;
                scanf("%d",&x);
                for(int j=1;j<=n;j++)
                {
                    a[j]=a[j]*x;
                }
            }
            else if(c=='D')
            {
                int x;
                scanf("%d",&x);
                for(int j=1;j<=n;j++)
                {
                    a[j]=a[j]/x;
                }
            }
            else if(c=='R')
            {
                reverse(a+1,a+n+1);
            }
            else
            {
                int x,y;
                scanf("%d%d",&x,&y);
                swap(a[x+1],a[y+1]);
            }
        }
        printf("Case %d:\n",t);
        for(int i=1;i<n;i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[n]);

    }
    return 0;
}
