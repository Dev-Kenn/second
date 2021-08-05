#include <iostream>
using namespace std;

int main() {
   int n, num[40], largest, second;

   cout << "How many elements you want to enter: ";
   cin >> n;
   cout<<"Enter any "<< n <<" elements in Array: \n";
   for(int i = 0; i < n; i++){
      cout<<"Enter Array Element "<<(i+1)<<": ";
      cin>>num[i];
   }

   if(num[0] < num[1]){ 
      largest = num[1];
      second = num[0];
   }
   else{ 
      largest = num[0];
      second = num[1];
   }
   for (int i = 2; i< n ; i ++) {
      if (num[i] > largest) {
         second = largest;
         largest = num[i];
      }
      else if (num[i] > second && num[i] != largest) {
         second = num[i];
      }
   }
   cout<<"Second Largest Element in array is: "<<second;
   return 0;
}