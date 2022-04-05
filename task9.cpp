#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Take 2 strings s1 and s2 including only letters from a to z. Return a new sorted string, the longest possible, containing distinct letters - each taken only once - coming from s1 or s2.

// Examples:

// a = "xyaabbbccccdefww"
// b = "xxxxyyyyabklmopq"
// longest(a, b) -> "abcdefklmopqwxy"

// a = "abcdefghijklmnopqrstuvwxyz"
// longest(a, a) -> "abcdefghijklmnopqrstuvwxyz"

string removeDuplicates(string s){
  if(s.length() < 1){
    return "";
  }
  char ch = s[0];
  string ans = removeDuplicates(s.substr(1));
  if(ans[0] == ch){
    return ans;
  }
  return (ch+ans);
}



static std::string longest(const std::string &s1, const std::string &s2){
   
  string final =  s1 + s2;

  sort(final.begin() , final.end());

  return removeDuplicates(final);

}



int main(){

  cout << longest("xyaabbbccccdefww", "xxxxyyyyabklmopq") << endl;

  return 0;
}