#include <iostream>
using namespace std;

    

int main(){
    
    string s = "ABC";

    string r = s.substr(0, 2) + s.substr(3);

    cout << r << endl;
    
    return 0;
}