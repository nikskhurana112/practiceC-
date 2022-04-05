#include <iostream>
#include <cctype>
using namespace std;

bool findZoo(string s){
  int countZ = 0, countO = 0;
  for(int i=0; i<s.length(); i++){
    if(tolower(s[i]) == 'z'){
      countZ++;
    }
    if(tolower(s[i]) == 'o'){
      countO++;
    }
  }
  return countZ*2 == countO;
}

int main(){

  string s; 
  cin>>s;

  cout << findZoo(s) << endl;
  return 0;
}