#include<iostream>
using namespace std;
void duplicate(int n,char arr[])
{
    char array[26];
    char c='a';
     for(int i=0;i<26;i++,c++)
     {
         array[i]=c;
         }
     int count[26];
    for(int i=0;i<26;i++)
     {
         count[i]=0;
     }
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<26;j++)
         {
            if(arr[i]==array[j])
         {
             count[j]++;
         }
     }
 }

 int max=count[0];

 for(int i=0;i<26;i++)
 {
 if(count[i]>max)
 {
 max=count[i];
 }

 }
 if(max == 1)
 cout<<"no duplicates"<<endl;
 else
 cout<<arr[max]<<" - "<<max<<endl;
}


int main()
{
 int t;
 cin>>t;
 while (t--)
 {
 int n;
 cin>>n;
 char arr[n];
 for(int i=0;i<n;i++)
 {
 cin>>arr[i];
 }
 duplicate(n,arr);
 }
}