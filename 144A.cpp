#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],ma=0,mi=101,maxindex,minindex;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>ma)
        {
            ma=arr[i];
            maxindex=i;
        }
        if(arr[i]<=mi)
        {
            mi=arr[i];
            minindex=i;
        }
    }
    if(maxindex>minindex)
    {
        minindex++;
    }
    cout<<maxindex+(n-1)-minindex;
}
