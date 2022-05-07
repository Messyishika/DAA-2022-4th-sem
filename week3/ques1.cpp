#include<iostream>
#include<stdio.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    int count = 0;
    int c = 0;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = 0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                count++;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                c++;
            }
        }
    }
    cout<<"\nthe values after sort are\n";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<" comparisions ="<<count<<endl;
    cout<<" swaps ="<<c<<endl;
}
int main()
{
    int n,t;
    cin>>t;
    while(t>0)
{
    cout<<"enter the no. of elements to be inserted\n";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"the values before sort are\n";
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    bubble_sort(arr,n);
    t--;
}
    return 0;
}