# include<iostream>
using namespace std;
void sel_sort(int arr[],int n)
{
    int cp = 0, cs = 0;
    for(int i = 0; i<n-1; i++)
    {
        int minIdx = i;
        for(int j = i+1; j<n; j++)
        {
            cp++;
            if(arr[j]<arr[minIdx])
               { 
                   
                   minIdx = j;
               }
        }
        swap(arr[minIdx],arr[i]);
        cs++;
    }cout<<"\n comparsions "<<cp<<endl<<"swaps "<<cs;

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
        cout<<"array before sorting\n";
      for(int i = 0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        } 
        sel_sort(arr,n); 
        
        cout<<"\narray before sorting\n";
        for(int i = 0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        } 
    }
    return 0;
}