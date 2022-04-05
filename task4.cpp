// An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

// Example: (Input --> Output)

// "Dermatoglyphics" --> true
// "aba" --> false
// "moOse" --> false (ignore letter case)

#include <iostream>
using namespace std;
#include<bits/stdc++.h>

bool is_isogram(std::string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(int i=0; i<str.length(); i++){
        for(int j= i+1; j<str.length(); j++){
            if(str[i] == str[j]){
                return false;
            }
        }   
    }
    return true;
}

int main(){

    cout << is_isogram("Dermatoglyphics") << endl;
    cout << is_isogram("aba") << endl;
    cout << is_isogram("moOse") << endl;

    return 0;
}



