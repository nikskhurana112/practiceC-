#include <iostream>
using namespace std;

void swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){

  int a = 4;
  int *aptr = &a;

  cout << *aptr << endl;
  // cout << &aptr << endl;
  // cout << aptr << endl;
  // cout << &a <<  endl;

  // int ar[] = {1, 2, 3, 4};

  // cout << &ar[0] << endl;

  // int a=2;
  // int b=4;
  // int *aptr=&a;
  // int *bptr=&b;

  // swap(&a, &b);

  // cout << a << " " << b << endl;
  return 0;
}