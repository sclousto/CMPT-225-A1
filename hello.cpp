#include <iostream>
using namespace std;

int main (void) {
  float x;
  int i;
  cin >> x;
  if(x == (int)x && cin) {
    i = int(x);
    if(i%2 == 0) {
      cout << "Even";
    }
    else if(i%2 == 1) {
      cout << "Odd";
    }
  }
  else {
    cout << "Nonint";
  }
    cout << endl;
  return 0;
}
