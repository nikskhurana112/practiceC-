// Return the number (count) of vowels in the given string.

// We will consider a, e, i, o, u as vowels for this Kata (but not y).

// The input string will only consist of lower case letters and/or spaces.

#include <iostream>
using namespace std;

int getCount(const string inputStr){
    int num_vowels = 0;
    for(int i=0; i< inputStr.length(); i++){
        if(
            inputStr[i] == 'a' ||
            inputStr[i] == 'e' ||
            inputStr[i] == 'i' ||
            inputStr[i] == 'o' ||
            inputStr[i] == 'u' 
        ){
            num_vowels++;
        }
    }
    return num_vowels;
}
int main(){

    cout << getCount("abracadabra") << endl;

    return 0;
}
