#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a=0,b=0;
        cin>>n;
        if(n<=10)
            a=n;
        else
        {
            a=10;b=n-a;
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
