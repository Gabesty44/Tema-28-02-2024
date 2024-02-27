#include <iostream>

using namespace std;

int main()
{
    int n,i,k=0,v[100];
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    i=1;
    while(v[i])
    {
    if(v[i]>v[i+1])
        k++;
    i++;
    }
cout<<k;
return 0;
}
