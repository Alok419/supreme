#include <iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[],int size){
    int maxi = INT_MIN;
    for(int i = 0 ;i<size;i++){
      if(arr[i]> maxi){
        maxi = arr[i];
      }
    }
    return maxi;
}
int getMin(int arr[],int size){
    int mini = INT_MAX;
    for(int i = 0 ;i<size;i++){
      if(arr[i]< mini){
        mini = arr[i];
      }
    }
    return mini;
}
int main() {
  int arr[10] = { -1,2,23,45,21,45,56,99,100,100};\
  int size = 10;  
  cout << " maximum value is "<< getMax(arr,size) << endl;
  cout << " maximum value is "<< getMin(arr,size) << endl;
  return 0;
}