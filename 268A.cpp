
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,i,j,count=0;
    cin>>n;
    long h[n],a[n];
    for(i=0; i<n; i++)
    {
        cin>>h[i]>>a[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(h[i]==a[j])
                count++;
        }
    }
    cout<<count<<endl;
}
