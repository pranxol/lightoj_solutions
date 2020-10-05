#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numcas;cin>>numcas;
	int cid=0;

	while(numcas--){
		int a,b,ans=0;cin>>a>>b;
			ans= ( ((b-1)/3)*2 + (b-1)%3) - (((a-2)/3)*2 + (a-2)%3);
		cout<<"Case "<<++cid<<": "<<((a==1)?ans-1:ans)<<endl;
	}
	return 0;
}
