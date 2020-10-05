#include<bits/stdc++.h>
using namespace std;

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int vis[12][12],level[12][12];
struct point
{
    int x,y;
    point (){}
    point(int a,int b)
    {
        x=a;y=b;
    }
};
int main()
{
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
    int tc;
    scanf("%d",&tc);
    for(int t=1;t<=tc;t++)
    {
        int n;
        scanf("%d",&n);
        char c[12][12];
        int g[5],h[5];
        int cnt=1;
        for(int i=1;i<=n;i++)
        {
            getchar();
            for(int j=1;j<=n;j++)
            {
                scanf("%c",&c[i][j]);
                if(c[i][j]=='A'||c[i][j]=='B'||c[i][j]=='C')
                {
                    g[cnt]=i;
                    h[cnt]=j;
                    cnt++;
                }
            }
        }

        int chk[4];
        chk[1]==0;
        chk[2]=0;
        chk[3]=0;
        for(int abc=1;abc<=3;abc++)
        {
            memset(vis,0,sizeof vis);
            memset(level,0,sizeof level);
            queue<point>q;
            point p;
            q.push(point(g[abc],h[abc]));
            vis[g[abc]][h[abc]]=1;
            while(!q.empty())
            {
                p=q.front();
                q.pop();
                for(int i=0;i<4;i++)
                {
                    int nx=p.x+dx[i];
                    int ny=p.y+dy[i];
                    if(nx>=1&&nx<=n&&ny>=1&&ny<=n&&vis[nx][ny]==0)
                    {
                        if(c[nx][ny]=='.')
                        {
                            vis[nx][ny]=1;
                            q.push(point(nx,ny));
                            level[nx][ny]=level[p.x][p.y]+1;
                            continue;
                        }
                        if(c[nx][ny]=='X')
                        {
                            c[nx][ny]='#';
                            chk[abc]=level[p.x][p.y]+1;
                            int sz=q.size();
                            for(int ss=1;ss<=sz;ss++)
                            {
                                q.pop();
                            }
                            break;
                        }
                    }
                }
            }
        }
        if(chk[1]==0||chk[2]==0||chk[3]==0)
            printf("Case %d: trapped\n",t);
        else
        {
            int ans=max(chk[1],max(chk[2],chk[3]));
            printf("Case %d: %d\n",t,ans);
        }
    }


    return 0;
}
