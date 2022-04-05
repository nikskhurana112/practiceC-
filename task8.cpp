#include <iostream>
#include <cmath>
using namespace std;


// Given two integers a and b, which can be positive or negative, find the sum of all the integers between and including them and return it. If the two numbers are equal return a or b.

// Note: a and b are not ordered!

// Examples (a, b) --> output (explanation)

// (1, 0) --> 1 (1 + 0 = 1)
// (1, 2) --> 3 (1 + 2 = 3)
// (0, 1) --> 1 (0 + 1 = 1)
// (1, 1) --> 1 (1 since both are same)
// (-1, 0) --> -1 (-1 + 0 = -1)
// (-1, 2) --> 2 (-1 + 0 + 1 + 2 = 2)


int sum(int a, int b){
  int sum = 0;
  if(a > b){
    int temp = b;
    b = a;
    a = temp;
  }
  
  for(int i=a; i<=b; i++){
    sum += i;
  }
  return sum;
}

int main(){

  int a, b;

  cin>>a>>b;

  cout << a << " " << b << endl;

  cout << sum(a, b) << endl;

  return 0;
}