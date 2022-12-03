#include <iostream>

using namespace std;

int main() {
  int n,i,d;
  cin >> n >> i >> d;

  while(i-- > 0) {
    cout << n << endl;
    n += d;
  }
  
  return 0;
}