#include <bits/stdc++.h>
using namespace std;
int main()
{int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    
}
int max=arr[0];
for(int i=0;i<n;i++)
{
    if(max<arr[i])
    {
        max=arr[i];
    }
}
int Count=0;
for(int i=0;i<n;i++)
{
    if(arr[i]==max)
    {
        Count++;
    }
}
cout<<Count;

return 0;
    
} 

