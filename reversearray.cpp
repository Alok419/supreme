#include <iostream>
using namespace std;
void reverseArray(int arr[],int size){
  int s = 0;
  int e = size-1;
  
  while(s<=e){
  
   swap(arr[s],arr[e]);
    s++;
    e--;
  }

}
int main() {
 int arr[10] = {1,2,3,4,5,6,7,8,9,10};
 int size = 10;
reverseArray(arr, size);
for(int i = 0;i<size;i++){
  cout << arr[i] << " ";
}
return 0;
}