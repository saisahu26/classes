#include<iostream>

using namespace std;


int main () {
  
  int hold [10];

  int newhold [10];

  int enter;

  int count = 0;

  int num = 5;

  int newnum = 5 % 5;

  int sum = 1;
  
  cout << newnum << endl;
  

  for (int i; i < 10; i++) {
    cin >> enter;
    
    hold [i] = enter;

    
  }

  for (int i; i < 10; i++) {
    if ((hold[i] % 5 != 0) && (hold[i] % 7 != 0)) {
      newhold[count] = hold[i];
      sum = sum * newhold[count];
      count++;
      
    }
  }

  cout << sum << endl;
  

  //cout << count << endl;
  //cout << newhold[4] << endl;

  for (int i; i < count; i++) {
    //cout << newhold[i] << endl;
    //sum = sum * newhold[i];
  }

  cout << sum << endl;

  return 0;
}
