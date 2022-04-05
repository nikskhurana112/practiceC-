//return for prime Number between two integers

#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(int a){
  for(int i=2; i<=sqrt(a); i++){
    if(a % i == 0){
      return false;
    }
  }
  return true;
}

void primeNumbers(int a, int b){
  for(int i=a; i<=b; i++){
    if(isPrime(i)){
      cout << i << " ";
    }
  }
  cout << endl;
}

int main(){
  primeNumbers(1, 30);
  return 0;
}