#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int tt=1;tt<=t;tt++)
    {
        printf("Case %d:\n",tt);
        int n,m;
        scanf("%d%d",&n,&m);
        deque<int>q;
        for(int i=1;i<=m;i++)
        {
            char c[20];
            int x;
            scanf("%s",c);
            string s=c;
            if(s=="pushLeft")
            {
                scanf("%d",&x);
                if(q.size()==n)
                {
                    printf("The queue is full\n");
                }

                else
                {
                    printf("Pushed in left: %d\n",x);
                    q.push_front(x);
                }

            }
            else if(s=="pushRight")
            {

                scanf("%d",&x);
                if(q.size()==n)
                {
                    printf("The queue is full\n");
                }
                else
                {
                    printf("Pushed in right: %d\n",x);
                    q.push_back(x);
                }
            }
            else if(s=="popLeft")
            {
                if(q.size()==0)
                    printf("The queue is empty\n");
                else
                {
                    int a=q.front();
                    printf("Popped from left: %d\n",a);
                    q.pop_front();
                }
            }
            else
            {
                if(q.size()==0)
                    printf("The queue is empty\n");
                else
                {
                    int a=q.back();
                    printf("Popped from right: %d\n",a);
                    q.pop_back();
                }
            }
        }
    }

    return 0;
}
