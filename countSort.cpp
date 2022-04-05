#include <iostream>
using namespace std;

void countSort(int arr[], int n){
  
  int k=arr[0];
  for(int i=0; i<n; i++){
    k=max(k, arr[i]);
  }
  //Making an array
  int count[k+1] = {0};
  for(int i=0; i<n; i++){
    count[arr[i]]++;
  }
  //Modifying the count array
  for(int i=1; i<=k; i++){
    count[i] += count[i-1];
  }
  //Making an output array and doing actual sort
  int output[n];
  for(int i=n-1; i>=0; i--){
    output[--count[arr[i]]] = arr[i];
  }
  //Making the output array into actual array
  for(int i=0; i<n; i++){
    arr[i] = output[i];
  }

}

int main(){
  //An array
  int arr[] = {1, 3, 2, 3, 4, 1, 6, 4, 3};

  countSort(arr, 9);
  //Printing
  for(int i=0; i<9; i++){
    cout << arr[i] << " ";
  }cout << endl;

  return 0;
}