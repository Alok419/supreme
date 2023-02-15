#include <iostream>
#include<vector>
using namespace std;

int main() {
  // create vector
  vector <int> arr;

 cout <<  arr.size() << endl;
 cout <<  arr.capacity() << endl;

 // inserting elements
 arr.push_back(5);
 arr.push_back(6);

 // printing the values
for(int i =0;i<arr.size();i++){
  cout << arr[i] << " ";
}
cout << endl;

// deleting the element
arr.pop_back();
arr.pop_back();


for(int i =0;i<arr.size();i++){
  cout << arr[i] << " ";
}

cout << endl;

cout << " Vector is empty or not " << arr.empty();
  return 0;
}