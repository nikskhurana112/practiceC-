//How many numbers between 1 and 1000 are divisible by 5 and 7?
#include <iostream>
using namespace std;

int divisible(int n, int a, int b){
  int c1=n/a;
  int c2=n/b;
  int c3=n/(a*b);

  return (c1 + c2 - c3);
}

int main(){

  cout << divisible(100, 5, 7);
  return 0;
}