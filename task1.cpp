// Write a function that takes in a string of one or more words, and returns the same string, but with all five or more letter words reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.

// Examples: spinWords( "Hey fellow warriors" ) => returns "Hey wollef sroirraw" spinWords( "This is a test") => returns "This is a test" spinWords( "This is another test" )=> returns "This is rehtona test"

#include <iostream>
#include <string>
using namespace std;

int main(){
    string words;
    string final = "";
    cout<<"Enter Words of your choice: "<< endl;
    getline (cin, words);
    int j = 0;
    int count = 0;

    for(int i=0; i<=words.length(); i++){
        
        if(words[i] != ' '){
            count++;
        }
        if(words[i] == ' ' || i == words.length()){
            
            if(count >= 5){
                for(int k = i -1; k >= j; k--){
                    final += words[k];
                }
            }
            else{
                
                for(int l = j; l < i; l++){
                    final += words[l];
                }
            }
            final += words[i];
            j = i + 1;
            count = 0;
                    
        }
    }

    cout << final << endl;

    return 0;


}