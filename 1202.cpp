#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int r1,c1,r2,c2;
        scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
        if(r1%2==1&&c1%2==0||r1%2==0&&c1%2==1)
        {
            printf("Case %d: ",i);
            if(r2%2==1&&c2%2==1||r2%2==0&&c2%2==0)
            {
                printf("impossible\n");
            }
            else
            {
                int r=abs(r1-r2);
                int c=abs(c1-c2);
                if(r==c)
                    printf("1\n");
                else
                    printf("2\n");
            }
        }
        else
        {
            printf("Case %d: ",i);
            if(r2%2==1&&c2%2==0||r2%2==0&&c2%2==1)
            {
                printf("impossible\n");
            }
            else
            {
                int r=abs(r1-r2);
                int c=abs(c1-c2);
                if(r==c)
                    printf("1\n");
                else
                    printf("2\n");
            }
        }
    }
    return 0;
}
