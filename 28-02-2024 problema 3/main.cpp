#include <iostream>

using namespace std;

int main()
{
    int v[100];
    int s,primul,ultimul,n,i;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
    {
        if(v[i]%2==1)
        {
            primul=i;
            break;
        }
    }
    for(i=n;i>=1;i--)
    {
        if(v[i]%2==1)
        {
            ultimul=i;
            break;
        }
    }
    for(i=primul;i<=ultimul;i++)
        cout<<v[i]<<" ";
    return 0;
}
