#include <iostream>
#include <cstring>
using namespace std;

int main () {

  char str [80];

  char hold [80];

  cin.getline(str, 80);

  char temp = ' ';

  int length = strlen(str);

  for (int i = 0; i < length; i++) {
    hold[i] = str[i];

  }

  hold[0] = str[1];
  hold[1] = str[0];

  for (int i = 0; i < length; i++) {

    if ((int)(str[i]) == 32) {

      hold[i + 1] = str[i + 2];
      hold [i + 2] = str[i + 1];
      
      //cout << i << endl;
    }

  }

  for (int i = 0; i < length; i++) {

    cout << hold[i];
  }

  
  return 0;
}
