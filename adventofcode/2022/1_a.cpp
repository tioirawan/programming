#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  string t;

  int mx = INT_MIN;
  int s = 0;
  while(getline(cin, t)) {
    if(t.empty()) {
      if(s > mx) {
        mx = s;
      }
      s = 0;
      continue;
    }

    s += stoi(t);
  }

  cout << mx << endl;

  return 0;
}