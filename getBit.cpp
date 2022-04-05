#include <iostream>
using namespace std;

int getBit(int n, int pos){
  return ((n & (1<<pos)) != 0);
}

int setBit(int n, int pos){
  return ((n | (1<<pos)));
}
int clearBit(int n, int pos){
  return ((n & ~(1<<pos)));
}

int updateBit(int n, int pos, int value){
  return (n & ~(1<<pos) | (value<<pos));
}

int main(){
  cout << updateBit(5, 2, 0) << endl;
  cout << clearBit(5, 0) << endl;
  cout << setBit(5, 1) << endl;
  cout << getBit(5, 2) << endl;
  return 0;
}