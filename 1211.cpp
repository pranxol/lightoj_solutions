#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    int x1,y1,z1,x2,y2,z2;
    int xl,yl,zl,xh,yh,zh;
    for(int i=1;i<=t;i++)
    {
        int xl=0,yl=0,zl=0,xh=1005,yh=1005,zh=1005;
        int n ;
        scanf("%d",&n);
        for(int j=1;j<=n;j++)
        {
            scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
            xl=max(xl,x1);
            yl=max(yl,y1);
            zl=max(zl,z1);

            xh=min(xh,x2);
            yh=min(yh,y2);
            zh=min(zh,z2);

        }

        int ans=(xh-xl)*(yh-yl)*(zh-zl);
        if(ans>0)
        {
            printf("Case %d: %d\n",i,ans);
        }
        else
            printf("Case %d: 0\n",i);

    }
    return 0;
}
