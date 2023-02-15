#include <iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int> arr){
  int ans = 0;
  for(int i = 0;i<arr.size();i++){
    ans = ans^arr[i];
  }
 return ans;
}

int main() {

   int n ;
   cout << " enter the size of the array" << endl;
   cin >> n;
   vector<int> arr(n);
   cout << " enter the values in array" << endl;

   for(int i =0;i<arr.size();i++){
  cin >> arr[i] ;
}
cout << " unique element is " << findUniqueElement(arr) <<endl;



  return 0;
}