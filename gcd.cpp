#include <iostream>
#include <cmath>
using namespace std;


int gcd(int a, int b){
  int c = max(a, b);
  int d = min(a, b);
  int res = -1; 
  while(res != 0){
    res = c % d;
    if(res == 0){
      break;
    }
    c = d;
    d = res; 
  }
  return d;
}

int main(){

  cout << gcd(42, 24) << endl;
  
  return 0;
}