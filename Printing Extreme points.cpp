#include <iostream>
using namespace std;

void printExtrempoints(int arr[],int size){
  int s = 0;
  int e = size-1;
  
  while(true){
  
    if(s>e)
      break;
    if(s==e){
      cout << arr[s];
    }
    else{
    cout << arr[s] << " ";
    cout << arr[e] << " ";
    }
    s++;
    e--;
  }
}
int main() {
  int arr[10] = { 10,20,30,40,50,60,70,80,90,100};
  int size = 10;
  printExtrempoints(arr,size);
  return 0;
}