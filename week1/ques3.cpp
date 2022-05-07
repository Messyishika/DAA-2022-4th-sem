#include<iostream>
#include<math.h>
using namespace std;
int cmp = 0;
int jump_search(int arr[],int n,int key)
{
    int low = 0;
    int jmp = sqrt(n);
    for(int i = 0;i<n; i+=jmp)
    {
       cmp++;
        if(arr[i] == key)
        return i;
        if(arr[i]<key)
        low = i;
        if(arr[i]>key)
        break;
    }
    for(int i = low;i<n;i++)
    {
        cmp++;
        if(arr[i] == key)
        return i;
    }return -1;
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
        for(int i = 0; i<n; i++)
        {
            cin>>arr[i];
        }
        int key;
        cin>>key;
        int pos =jump_search(arr,n,key);
        if(pos == -1)
        cout<<"not present "<<endl;
        else
        cout<<"present "<<cmp;
    }
}