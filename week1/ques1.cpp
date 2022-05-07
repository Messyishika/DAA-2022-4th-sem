#include <iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,key,count=0;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
       {
          cin>>arr[i]; 
       }
       cin>>key;
       for(int i=0;i<n;i++)
       {
           count++;
           if(key==arr[i])
           break;
       }
       if(count>n)
       cout<<"Not Found";
       else
       cout<<"Present at Position"<<count;
   }

    return 0;
}