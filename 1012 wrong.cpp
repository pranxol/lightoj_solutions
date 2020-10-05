#include<bits/stdc++.h>
using namespace std;
char c[22][22];
int vis[22][22];
int dx[]={0,0,1,-1};
int dy[]={-1,1,0,0};
int cnt,w,h;
void dfs(int x,int y)
{

    for(int i=0;i<4;i++)
    {
        int a=x+dx[i];
        int b=y+dx[i];
        if(a>=1&&b>=1&&a<=h&&b<=w)
        {
            if(c[a][b]=='.' && vis[a][b]==0)
            {
                vis[a][b]=1;
                cnt++;
                dfs(a,b);
            }
        }
    }
    return ;
}
int main()
{
    int t;

    int x,y;
    cnt=0;
    scanf("%d%d",&w,&h);
    for(int i=1;i<=h;i++)
    {
        getchar();
        for(int j=1;j<=w;j++)
        {
            scanf("%c",&c[i][j]);
            if(c[i][j]=='@')
            {
                x=i;y=j;
                cnt++;
            }
        }
    }
    memset(vis,0,sizeof(vis));
    vis[x][y]=1;
    dfs(x,y);
    printf("%d\n",cnt);

    return 0;
}
