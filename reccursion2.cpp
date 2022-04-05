//check if the array is sorted

#include <iostream>
using namespace std;

bool sorted(int arr[], int n){
  
  if(n==1){
    return true;
  }

  bool restArray = sorted(arr+1, n-1);
  if(arr[0]<arr[1]){
    return true && restArray;
  }
  else{
    return false;
  }
}

int main(){
  int ar[] = {1, 2, 3, 4, 5, 6};
  cout << sorted(ar, 6) << endl;
  return 0;
}