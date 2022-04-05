//print a solid rectangle

#include <iostream>
using namespace std;

void solidRect(int r, int c){
    for(int row = 0; row < r; row++){
        for(int col = 0; col < c; col++){
            cout << "*";
        }
        cout << endl;
    }
}

void hollowRect(int r, int c){
    for(int row = 0; row < r; row++){
        for(int col = 0; col < c; col++){
            if(row == 0 || row == r-1){
                cout << "*";
            }
            else{
                if(col == 0 || col == c-1){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

}

void halfPyramid(int n){
    for(int row = 0; row < n; row++){
        for(int col = 0; col <= row; col++){
            cout << "*";
        }
        cout << endl;
    }
}

void invertedHalfPyramid(int n){
    for(int row = 0; row < n; row++){
        for(int col = (n-row); col > 0; col--){
            cout << "*";
        }
        cout << endl;
    }
}

void halfPyramid180(int n){
    for(int row = 0; row < n; row++){
        for(int space = (n - row - 1); space > 0; space--){
            cout << " ";
        }
        for(int col = 0; col <= row; col++){
            cout << "*";
        }
        cout << endl;
    }
    
}

void halfPyramidNumbers(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout << col;
        }
        cout << endl;
    }
}

void invertedHalfPyramidNumbers(int n){
    for(int row=1; row<=5; row++){
        for(int col=n; col>=row; col--){
            cout << (n + 1 - col);
        }
        cout << endl;
    }
}

void halfPyramidNumbers2(int n){
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout << row;
        }
        cout << endl;
    }
}

void invertedHalfPyramidNumbers2(int n){
    for(int row=1; row<=n; row++){
        for(int col=n; col>=row; col--){
            cout << row;
        }
        cout << endl;
    }
}

void floydsTriangle(int n){
    int number = 1;
    for(int row=1; row<=n; row++){
        for(int col=1; col<=row; col++){
            cout << number << " "; 
            number++; 
        }
        cout << endl;
    }
}

void patternOf01(int n){
    
    for(int row = 0; row < n; row++){
        for(int col = 0; col <= row; col++){
            if(row % 2 == 0){
                if(col % 2 == 0){
                    cout << 1;
                }
                else{
                    cout << 0;
                }
            }
            else{
                if(col % 2 == 0){
                    cout << 0;
                }
                else{
                    cout << 1;
                }
            }
        }
        cout << endl;
    }
}

void palindromic(int n){
    for(int row = 1; row <= n; row++){
        for(int space = (n-1); space >= row; space--){
            cout << " ";
        }
        for(int col = row; col >= 1; col--){
            cout << col;
        }
        for(int col= 2; col <= row; col++){
            cout << col;
        }
        for(int space = (n-1); space >= row; space--){
            cout << " ";
        }
        cout << endl;
    }
}

// void diamond(int n){
//     for(int row = 0; row < 2*n; row++){
//         for(int space=x`)
//     }
// }

int main(){

    palindromic(10);
    //patternOf01(5);
    //floydsTriangle(5);
    //invertedHalfPyramidNumbers2(5);
    //halfPyramidNumbers2(5);
    //invertedHalfPyramidNumbers(5);
    //halfPyramidNumbers(5);
    //halfPyramid180(5);
    //invertedHalfPyramid(5);
    //halfPyramid(5);
    //hollowRect(5, 4);
    //solidRect(5, 4);

    return 0;
}