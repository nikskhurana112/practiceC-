#include <iostream>
using namespace std;

int factorial(int n){
  int res = 1;
  for(int i=n; i>0; i--){
    res = res * i;
  }
  return res;
}

int nCr(int n, int r){
  return factorial(n)/(factorial(n - r)*factorial(r));
}

int main(){
  cout << nCr(5, 2) << endl;
  return 0;
}