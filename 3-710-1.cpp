#include<bits/stdc++.h>
using namespace std;
void solve()
{
 
    long long n,m,x;
    cin>>n>>m>>x;
    int j=(x-1)/n+1,i=x%n;
		if(!i) i=n;
		cout<<m*(i-1)+j<<endl;

    















    return;
}

		
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}




