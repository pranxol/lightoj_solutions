#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pi acos(-1)
#define ll long long
#define pb push_back
#define pob pop_back
#define infinity 2147483647
//freopen ("input.txt", "r", stdin);
//freopen ("output.txt", "w", stdout);
int r,c,cnt=1;
bool vis[22][22];
char a[22][22];
int xmov[]={1,-1,0,0};
int ymov[]={0,0,1,-1};
void dfs(int x,int y)
{
    for(int mov=0;mov<4;mov++)
    {
        int newx=x+xmov[mov],newy=y+ymov[mov];
        if(newx>=1&&newx<=r&&newy>=1&&newy<=c&&a[newx][newy]=='.')
        {
            if(vis[newx][newy]==0)
            {
                vis[newx][newy]=1;
                cnt++;
                dfs(newx,newy);
            }
        }
    }
    return;
}
int main()
{
    int t,sourcerow,sourcecol;
    sf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        memset(vis,0,sizeof(vis));
        sf("%d%d",&c,&r);
        for(int i=1;i<=r;i++)
        {
            getchar();
            for(int j=1;j<=c;j++)
            {
                sf("%c",&a[i][j]);
                if(a[i][j]=='@')
                {
                    sourcerow=i;
                    sourcecol=j;
                }
            }
        }
        cnt=1;
        vis[sourcerow][sourcecol]=1;
        dfs(sourcerow,sourcecol);
        pf("Case %d: %d\n",tc,cnt);

    }

    return 0;
}
