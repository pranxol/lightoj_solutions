#include<bits/stdc++.h>
using namespace std;
#define mx 20008
vector<int>adj[mx+8];
int vis[mx+8];
int res;
void bfs()
{
    res=0;
    memset(vis,0,sizeof(vis));
    for(int j=1;j<=20000;j++)
    {
        int cnt1=0;int cnt2=0;
        if(!adj[j].empty()&&vis[j]==0)
        {
            queue<int>q;
            q.push(j);
            vis[j]=1;
            cnt1++;
            while(!q.empty())
            {
                int a=q.front();
                q.pop();
                for(int i=0;i<adj[a].size();i++)
                {
                    int b=adj[a][i];
                    if(vis[b]==0)
                    {
                        q.push(b);
                        if(vis[a]==1)
                        {
                            vis[b]=2;cnt2++;
                        }
                        else
                        {
                            vis[b]=1;cnt1++;
                        }
                    }
                }
            }
            res=res+max(cnt1,cnt2);
        }
    }
}
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    int x,y;
    int t;
    scanf("%d",&t);
    for(int tc=1;tc<=t;tc++)
    {
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d",&x,&y);
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs();
        printf("Case %d: %d\n",tc,res);
        for(int i=1;i<=mx;i++)
        {
            adj[i].clear();
        }
    }

    return 0;
}
