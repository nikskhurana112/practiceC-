#include <iostream>
using namespace std;

//find a unique number in an array which has other numbers repeating twice
int unique(int arr[], int n)
{

  int xorsum = 0;
  for (int i = 0; i < n; i++)
  {
    xorsum = xorsum ^ arr[i];
  }
  return xorsum;
}
//write a program to find 2 unique numbers in an array where all numbers except two are present twice{2, 4, 6, 7, 4, 5, 6, 2}

int getBit(int n, int pos)
{
  return (n & (1 << pos) != 0);
}

int unique2(int arr[], int n)
{
  int xorsum = 0;
  for (int i = 0; i < n; i++)
  {
    xorsum = xorsum ^ arr[i];
  }
  int tempxor = xorsum;
  int setbit = 0;
  int pos = 0;
  while (setbit != 1)
  {
    setbit = xorsum & 1;
    pos++;
    xorsum = xorsum >> 1;
  }
  int newxor = 0;
  for (int i = 0; i < n; i++)
  {
    if (getBit(arr[i], pos - 1))
    {
      newxor = newxor^arr[i];
    }
  }
  cout << newxor << endl;
  cout << (tempxor^newxor) << endl;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 1, 2, 3};
  cout << unique2(arr, 8) << endl;
  return 0;
}