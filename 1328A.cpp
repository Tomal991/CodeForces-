#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        long int a,b;
        cin>>a>>b;
        if(a%b==0)
            cout<<"0"<<endl;
        else
            cout<<b-(a%b)<<endl;
    }
}
