#include <iostream>
using namespace std;

//Find the factorial of n

int factorial(int n){
  if(n==1){
    return 1;
  }
  int prevFactorial = factorial(n-1);

  return n * prevFactorial;
}

int main(){

  cout << factorial(5) << endl;
  return 0;
}