#include<iostream>
using namespace std;
int cmp = 0;
int inv = 0;
void merge(int *arr,int s,int e)
{
    int mid = s+(e-s)/2;
    int l1 = mid - s+1;
    int l2 = e -mid;
    

     int *a1 = new int[l1];
    int *a2 = new int[l2];
    int k = s;
    for(int i = 0; i<l1;i++)
    a1[i] = arr[k++];
     k = mid+1;
    for(int i = 0; i<l2;i++)
    a2[i] = arr[k++];
    int id1 = 0;
    int id2 = 0;
     k = s;
    //merge
    while(id1<l1 && id2<l2)
    {
        cmp++;
        if(a1[id1]<a2[id2])
        arr[k++] = a1[id1++];
        else
        {arr[k++] = a2[id2++];
        inv+= l1 - id1;}
    }
    while(id1<l1)
    {
        arr[k++] = a1[id1++];
    }
    while(id2<l2)
    {
        arr[k++] = a2[id2++];
    }
delete[]a1;
delete[]a2;
 
}
void merge_sort(int *arr,int s,int e)
{
    
    if(s>=e)
    return ;
        int mid = s +(e-s)/2;
    //int mid = s +(e-s)/2;
    // sort left part
   merge_sort(arr,s,mid);
    //sort right part
    merge_sort(arr,mid+1,e);
    //merge the sorted array
    merge(arr,s,e);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cmp = 0;
        inv = 0;
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
         merge_sort(arr,0,n-1);
        cout<<"comparision"<<cmp<<endl;
        cout<<"inversion"<<inv<<endl;

        for(int i = 0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
}