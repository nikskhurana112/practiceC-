#include <iostream>
using namespace std;

//You are given an array arr[] of N integers including 0. The taks is to find the smallest positive number missing from the array.
int main(){
  int n;
  cin>>n;
  
  int a[n];
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
  const int N = 1e6 + 2;
  bool check[N];

  for(int i=0; i<N; i++){
    check[i] = false;
  }

  for(int i=0; i<n; i++){
    if(a[i] >=0){
      check[a[i]] = true;
    }
  }
  int ans = -1;
  for(int i=0; i<N; i++){
    if(!check[i]){
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}