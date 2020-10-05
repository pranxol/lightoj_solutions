#include<bits/stdc++.h>
using namespace std;
int dx[]={1,1,2,2,-1,-1,-2,-2};
int dy[]={2,-2,1,-1,2,-2,1,-1};
struct point
{
    int x,y;
    point(){};
    point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
};
char a[15][15];
int main()
{
    int tc;
    int m,n,givennumbers=0,res=2147483647;
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++)
    {
        getchar();
        for(int j=0;j<n;j++)
        {
            scanf("%c",&a[i][j]);
            if(a[i][j]!='.')
                givennumbers++;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int vis[12][12],level[12][12];
            memset(vis,0,sizeof(vis));
            memset(level,0,sizeof(level));
            queue<point>q;
            q.push(point(i,j));
            point p;
            int cnt=0,numbers=0;
            if(a[i][j]!='.')numbers++;
            while(!q.empty())
            {
                p=q.front();
                q.pop();
                for(int k=0;k<8;k++)
                {
                    int newx=p.x+dx[k];
                    int newy=p.y+dy[k];
                    if(newx>=0&&newx<m&&newy>=0&&newy<n)
                    {
                        if(vis[newx][newy]==0)
                        {
                            vis[newx][newy]=1;
                            level[newx][newy]=level[p.x][p.y]+1;
                            q.push(point(newx,newy));
                            if(a[newx][newy]!='.')
                            {
                                numbers++;
                                int num=a[newx][newy]-'0';
                                double doucnt=ceil(level[newx][newy]/num);
                                cnt+=(int) doucnt;
                            }
                        }
                    }
                }
            }
            if(numbers==givennumbers)
            {
                printf("%d %d\n",numbers,givennumbers);
                if(cnt<=res)
                    res=cnt;
            }
        }
    }
    printf("%d",res);


    return 0;
}
