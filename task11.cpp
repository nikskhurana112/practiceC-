#include <iostream>
using namespace std;

// ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet. ROT13 is an example of the Caesar cipher.

// Create a function that takes a string and returns the string ciphered with Rot13. If there are numbers or special characters included in the string, they should be returned as they are. Only letters from the latin/english alphabet should be shifted, like in the original Rot13 "implementation".

string rot13(string msg)

{
  string final = "";
  for (int i = 0; i < msg.length(); i++)
  {
    int t = int(msg[i]);

    if (t >= 'a' && t <= 'z')
    {

      if (t + 13 > 'a' + 25)
      {
        final += char('a' + ((t + 13) - ('a' + 25)) - 1);
      }
      else
      {
        final += char(t + 13);
      }
    }
    else if (t >= 'A' && t <= 'Z')
    {
      if (t + 13 > 'A' + 25)
      {
        final += 'A' + ((t + 13) - ('A' + 25)) - 1;
      }
      else
      {
        final += t + 13;
      }
    }
    else
    {
      final += msg[i];
    }
  }
  return final;
}
int main()
{

  cout << rot13("%teSt") << endl;
  return 0;
}