#include <iostream>

using namespace std;

int main()
{
    int n,i,j,v[100],maxim=0,ultimul,lungime=0;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            if(v[i]==v[j])
                lungime=j-i+1;
            if(lungime>maxim)
            {
                maxim=lungime;
                ultimul=j;
            }
        }
    }
    for(i=(ultimul-maxim+1);i<=ultimul;i++)
        cout<<v[i]<<" ";
    return 0;
}
