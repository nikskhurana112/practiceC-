// In this little assignment you are given a string of space separated numbers, and have to return the highest and lowest number.

// Examples
// highAndLow("1 2 3 4 5");  // return "5 1"
// highAndLow("1 2 -3 4 5"); // return "5 -3"
// highAndLow("1 9 3 4 -5"); // return "9 -5"
// Notes
// All numbers are valid Int32, no need to validate them.
// There will always be at least one number in the input string.
// Output string must be two numbers separated by a single space, and highest number is first.

#include <iostream>
using namespace std;
#include <string>

std::string highAndLow(const std::string& numbers){
    int format_numbers[numbers.length()];
    for(int i = 0; i < numbers.length(); i++){
        int x = stoi(numbers);
        format_numbers.push(x);
        if(numbers[i] != ' '){
            
        }
    }
    int max = format_numbers[0];
    int min = format_numbers[0];
    for(int i = 1; i < format_numbers.length(); i++){
        if(format_numbers[i] > max){
            max = format_numbers[i];
        }
        if(format_numbers[i] < min){
            min = format_numbers[i];
        }
    }
    return max + " " + min;
    
}

int main(){

    cout << highAndLow("1 2 3 4 5") << endl;
    cout << highAndLow("1 2 -3 4 5") << endl;
    cout << highAndLow("1 9 3 4 -5") << endl;

    return 0;
}