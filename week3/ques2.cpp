# include<iostream>
using namespace std;
void ins_sort(int arr[],int n)
{
    int cp = 0, cs = 0;
    for(int i = 1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--)
        {
            cp++;
            if(arr[j]>temp)
               { 
                   arr[j+1] = arr[j];
               }
               else
               break;
        }
        arr[j+1] = temp;
        cs++;
    }
    cout<<"\n comparsions "<<cp<<endl<<"swaps "<<cs;

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
        ins_sort(arr,n); 
        cout<<"\narray after sorting\n";
        for(int i = 0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }    
    }
    return 0;
}