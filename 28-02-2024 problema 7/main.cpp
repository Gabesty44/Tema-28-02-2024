#include <iostream>

using namespace std;

int main()
{
    int n,t,k,contor=0,i,j,v[100];
    bool secventa;
    cin>>n>>t>>k;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n-k+1;i++)
    {
        secventa=true;
        for(j=i;j<i+k;j++)
        {
            if(v[j]>t)
            {
                secventa=false;
                break;
            }
        }
        if(secventa)
            contor++;
    }
    cout<<contor;
    return 0;
}
