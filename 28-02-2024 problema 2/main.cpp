#include <iostream>

using namespace std;

int main()
{
    int n,i,v[100],L=1,u=1,maxim=1;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=2;i<=n;i++)
    {
        if(v[i]%2!=v[i-1]%2)
            L++;
        else
            L=1;
        if(L>maxim)
        {
            maxim=L;
            u=i;
        }
    }
    cout<<u-maxim+1<<" "<<u;
    return 0;
}
