// Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.

// Examples:
// Input: 42145 Output: 54421

// Input: 145263 Output: 654321

// Input: 123456789 Output: 987654321

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int higestNumber(int y)
    {
        int a = 0;
        std::vector<int> ar;
        while(y != 0){
            int z = y % 10;
            y = y/10;
            ar.push_back(z);
        }
        sort(ar.begin(), ar.end(), greater<int>());

        for(auto i : ar){
            a = (a * 10) + i;
        }

        return a;
        
    }
int main(){
    int x;
    do{
        cout << "Enter a positive Number: " << endl;
        cin >> x;
    }while(x < 0);

    cout << higestNumber(x) << endl;

    return 0;
}
