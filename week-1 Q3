#include<iostream>
using namespace std;
int jump_Search(int a[], int n, int item) {
   int i = 0;
   int m = 2; 

   while(a[m] <= item && m < n) { 
      i = m;  
      m += 2;
      if(m > n - 1)  // if m exceeds the array size
         return -1; 
   }

   for(int x = i; x<m; x++) { //linear search in current block
      if(a[x] == item)
         return x; //position of element being searched 
   }
   return -1;
}

int main() {
   int n, key, loc;
   cout << "\n Enter size of array: ";
   cin >> n;
   int arr[n]; //creating an array of size n
   cout << "\n Enter numbers : ";

   for(int i = 0; i< n; i++) {
      cin >> arr[i];
   }

   cout << "\n Enter search key to be found in the array: ";
   cin >> key;
   loc = jump_Search(arr, n, item);
   if(loc>=0)
      cout << "\n Item found at location: " << loc;
   else
      cout << "\n Item is not found in the list.";
}
