#include <iostream>
#include <cmath>
using namespace std;

// int max2(int x, int y, int z){

//   if(y > x > z){
//     return y;
//   }
//   if(z > y > x){
//     return z;
//   }
//   else{
//     return x;
//   }
// }

bool pythagorian(int x, int y, int z){
 int a, b; 
 int  c = (max(x, max(y, z)));
 
 if(c == x){
   a = y;
   b = z;
 } 
 else if(c == y){
   a = x;
   b = z;
 }
 else{
   a = y;
   b = x;
 }
  if(c*c == a*a + b*b){
    return true;
  }
  else{
    return false;
  }
}
int main(){
  int a, b, c;
  cin>>a>>b>>c;
  cout << pythagorian(a, b, c) << endl;
 return 0; 
}