#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  int r[n][2];

  int i = 0;
  while(i < n) {
    int p, q, m;

    cin >> p >> q >> m;

    while(m-- > 0) {
      if(p > q) {
        p /= 2;
      } else {
        q /= 2;
      }
    }

    r[i][0] = p > q ? p : q;
    r[i][1] = p > q ? q : p;

    i++;
  }

  for(int i = 0; i < n; i++) {
    cout << r[i][0] << " " << r[i][1] << endl;
  }

  return 0;
}

