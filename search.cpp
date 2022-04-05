#include <iostream>
using namespace std;

int linear(int ar[], int n, int key){
  for(int i=0; i<n; i++){
    if(ar[i] == key){
      return i;
    }
  }
  return -1;
}

int binary(int ar[], int n, int key){
  int s=0;
  int e=n-1;
  int mid;

  while(s<=e){
   mid = (s + e) / 2;  
    if(ar[mid] == key){
      return mid;
    }
    else if(key < ar[mid]){
      e = mid -1;
    }
    else{
      s = mid + 1;
    }
  }
  return -1;
}

int main(){

  int n;
  cin >> n;

  int ar[n];

  for(int i=0; i<n; i++){
    cin>>ar[i];
  }

  int key;
  cin>>key;

  cout<<binary(ar, n, key)<<endl;


  return 0;
}