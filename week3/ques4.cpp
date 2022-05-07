#include<iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivot = arr[s];
    int c = 0;
    for(int i = s+1; i<=e; i++)
    {
        if(arr[i] <= pivot)
        c++;
    }
    int pidx = s+c;
    swap(arr[pidx],arr[s]);
    int i = s;
    int j = e;
    
    while(i<pidx && j>pidx)
    {
        
        while(arr[i] < arr[pidx])
       { i++;}
        while(arr[j] > pivot)
       { j--; }
        if(i < pidx && j > pidx){
        swap(arr[i],arr[j]);
        i++;
        j--;}
    }return pidx;
}
void quickSort(int arr[],int s,int e)
{
    if(s>=e)
    return;
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++)
        cin>>arr[i];
        quickSort(arr,0,n-1);
        /*for(int i = 0; i<n; i++)
        cout<<arr[i]<<" ";*/
        int count = 0;
        for(int i = 0; i<n; i++)
        {
            if(arr[i] == arr[i+1])
            count++;
        }
        if(count == 0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}