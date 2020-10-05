#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
    int t;
    cin>> t ;
    for(int tc=1;tc<=t;tc++)
    {
        printf("Case %d:\n",tc);
        char command[10];
        string x,y,go[105];
        go[0]="http://www.lightoj.com/";
        int i=0;
        int cnt=i;
        while(1)
        {
            scanf("%s",command);
            x=command;
            if(x=="QUIT")
                break;

            else if(x=="VISIT")
            {
                //cout<<"VISIT";
                char url[60];
                i++;
                cnt=i;
                scanf("%s",url);
                go[i]=url;
                cout<<go[i]<<endl;
            }
            else if(x=="BACK")
            {
                //cout<<"back";
                i--;
                if(i<0)
                {
                    i=0;
                    printf("Ignored\n");
                }
                else
                {
                    cout<<go[i]<<endl;
                }
            }
            else if(x=="FORWARD")
            {
                //cout<<"for";
                i++;
                if(i>cnt)
                {
                    i--;
                    printf("Ignored\n");
                }
                else
                {
                    cout<<go[i]<<endl;
                }
            }
        }
    }
    return 0;
}
