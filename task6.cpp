#include <iostream>
using namespace std;

//reverse a number
int reverseNumber(int n){
  int reverse = 0;
  int last;
   while(n != 0){
     last = (n%10);
     reverse *= 10;
     reverse += last;
     n /= 10;
   } 
   return reverse;
}
//check for a prime number
bool checkPrimeNumber(int n){
  for(int i=2; i<n/2; i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

int main(){
  // cout << reverseNumber(123456) << endl;
  cout << checkPrimeNumber(39) << endl;
  return 0;
}