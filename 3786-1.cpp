#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x,y;
    cin>>x>>y;
    if(x>y)
    {
        cout<<0<<" "<<0<<endl;
        return;
    }
    else
    {
        if(y%x==0)
        {
            cout<<1<<" "<<y/x<<endl;
        }
        else
        {
            cout<<0<<" "<<0<<endl;
        }
    }
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




