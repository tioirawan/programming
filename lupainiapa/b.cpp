#include <iostream>

using namespace std;

int main() {
  int a;

  cin >> a;

  if(a >= 0 && a <= 100) {
    cout << "YA";
  } else {
    cout << "TIDAK"; 
  }

  return 0;
}