#include <iostream>
#include <map>
#include <string>
using namespace std;

// The main idea is to count all the occurring characters in a string. If you have a string like aba, then the result should be {'a': 2, 'b': 1}.

// What if the string is empty? Then the result should be empty object literal, {}.

std::map<char, unsigned> count(const std::string &string)
{

  map<char, unsigned> countOccurances;
  map<char, unsigned>::iterator itr;

  for (int i = 0; i < string.length(); i++)
  {

    itr = countOccurances.find(string[i]);

    if (itr != countOccurances.end())
    {
      itr->second++;
    }

    else
    {
      countOccurances.insert({string[i], 1});
    }
  }

  if (string == "")
  {
    return {};
  }
  else
  {
    return countOccurances;
  }
}

int main()
{

  map<char, unsigned> countOccurances;

  countOccurances = count("abacda");

  map<char, unsigned>::iterator itr;

  for (itr = countOccurances.begin(); itr != countOccurances.end(); itr++)
  {
    cout << "key => " << itr->first << ", value => " << itr->second << endl;
  }

  return 0;
}