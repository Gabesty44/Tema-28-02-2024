#include <iostream>

using namespace std;

int main()
{
    int i,n,m,x[100],y[100],j,k=0;
    cin>>n>>m;
    if(m>n)
        return 0;
    for(i=1;i<=n;i++)
        cin>>x[i];
    for(i=1;i<=m;i++)
        cin>>y[i];
    j=1;
    for(i=1;i<=n;i++)
    {
        if(x[i]==y[j])
        {
            j++;
            k++;
            if(k==m)
            {
                cout<<"DA";
                return 0;
            }
        }
        else
        {
            j=1;
            k=0;
        }
    }
    cout<<"NU";
    return 0;
}
