#include <iostream>
using namespace std;

void countZeroAndOne(int arr[], int size){
  int zeroCount = 0;
  int oneCount = 0;

  for(int i = 0; i<size;i++){
    if(arr[i] == 0){
      zeroCount++;
    }
    if(arr[i]== 1){
      oneCount++;
    }
  }
  cout << " Number of zeroes are " << zeroCount << endl;
    cout << " Number of one are " << oneCount << endl;

}
int main() {
   int arr[12] = {1,0,0,0,0,1,1,1,13,4,0,7};
   int size = 12;

   countZeroAndOne(arr,size);
  return 0;
}