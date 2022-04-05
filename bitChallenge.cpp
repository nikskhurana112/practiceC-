#include <iostream>
using namespace std;

//check if the number is power of 2
bool checkPower2(int n)
{
  while (n > 1)
  {
    if (n % 2 != 0)
    {
      return false;
    }
    n /= 2;
  }
  return true;
}

bool ispowerof2(int n){
  return (n && !(n & n-1));
}
//find number of ones in a number in binary form
int numberofones(int n){
  int count=0;
  while(n){
    n = n & (n -1);
    count++;
  }
  return count++;
}
//write a program to generate possible subset of a set
void subsets(int arr[], int n){
  for(int i=0; i< (i<<n); i++){
    for(int j=0; j<n; j++){
      if(i & (1<<j)){
        cout << arr[j] << " ";
      }
    }cout<<endl;
  }
}

int main()
{
  int arr[4] = {1, 2, 3, 4};
  subsets(arr, 4);
  //cout << numberofones(19) << endl;
  //cout << ispowerof2(14) << endl;;
  // cout << checkPower2(512) << endl; 
  return 0;
}