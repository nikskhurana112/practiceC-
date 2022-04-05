#include <iostream>
using namespace std;

//Find the number of ways in which n friends can remain single or can be paired


int freindsPairing(int n){
  if (n==0 || n==1 || n==2){
    return n;
  }

  return freindsPairing(n-1) + freindsPairing(n-2)*(n-1);
}

int main(){

  cout<<freindsPairing(5)<<endl;

  return 0;
}