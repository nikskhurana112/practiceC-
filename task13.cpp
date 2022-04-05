#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

static std::vector<int> sqInRect(int lng, int wdth)
{
  vector<int> result{};
  if (lng == wdth)
  {
    return result;
  }
  else
  {
    int area = lng * wdth;
    for (int i = sqrt(area); area != 0; i = sqrt(area))
    {
      result.push_back(i);
      area = area - i * i;
    }
    return result;
  }
}

int main()
{

  vector<int> result = sqInRect(2500, 1);

  for (auto e : result)
  {
    cout << e << " ";
  }
  cout << endl;

  return 0;
}
