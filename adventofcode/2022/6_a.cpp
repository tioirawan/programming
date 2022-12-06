#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

void find(string signal) {
  for (int i = 0; i < signal.size() - 4; i++)
  {
    char a = signal[i];
    char b = signal[i + 1];
    char c = signal[i + 2];
    char d = signal[i + 3];

    if(!(a == b || a == c || a == d || b == c || b == d || c == d)) {
      cout << i + 4 << endl;
      break;
    }
  }
}

int main() {
  FAST;

  string val;

  while(getline(cin, val)) {
    find(val);
  }

  return 0;
}