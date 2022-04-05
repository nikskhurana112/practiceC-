#include <iostream>
#include <cmath>
using namespace std;

  //print n terms of Fibonacci series
  void Fibonacci(int n){
    int t1 = 0, t2 =1, t3;
    cout << t1 << " " << t2 << " ";
    for(int i = 2; i < n; i++){
      t3 = t1 + t2;
      cout << t3 << " ";
      t1 = t2;
      t2 = t3;
    }
  }

int main(){

  Fibonacci(10);

  return 0;
}