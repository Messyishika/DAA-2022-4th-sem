#include <iostream>
using namespace std;
int total_comparasions=0;
int binarysearch(int arr[], int lb , int ub , int key)
{
    while(lb<=ub)
    {   total_comparasions ++;
        int mid = (lb+ub)/2;
        if(arr[mid]==key)
        return mid;
        if(key>arr[mid])
        lb=mid+1;
        else
        ub=mid-1;
    }
    return -1;
}
int main()
{
   int t;
   cin>>t;
   while(t-->0)
   {
       int n,key,count=0;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
          cin>>arr[i]; 
       }
       cin>>key;
       total_comparasions=0;
       int found = binarysearch(arr,0,n-1,key);
       if(found == -1)
       cout<<"Not Found";
       else
       cout<<"Present at Position "<<found +1 <<"Total no of comparasions is "<< total_comparasions;
   }

    return 0;
}
