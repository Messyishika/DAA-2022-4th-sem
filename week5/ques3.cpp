#include<iostream>
using namespace std;
void common(int a[],int b[],int n,int m)
{
    int i = 0;
    int j = 0;
    while(i < n && j < m)
    {
        if(a[i] == b[j])
        {
        cout<<a[i]<<" ";
        i++;
        j++;
        }
    
    else if (a[i] < b[j])
    i++;
    else 
    j++;
    
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++)
        cin>>a[i];
        cin>>m;
        int b[m];
        for(int i = 0;i<m;i++)
        cin>>b[i];
        common(a,b,n,m);
    }
}