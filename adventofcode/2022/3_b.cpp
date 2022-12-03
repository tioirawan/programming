#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int priority(char x) {
  if (x > 'a') {
    return x - 'a' + 1;
  } else {
    return x - 'A' + 27;
  }
}

int main() {
  FAST;

  string s;

  set<char> appears;
  set<char> reapp;

  int sum = 0;
  int ctr = 0;
  
  while (getline(cin, s)) {
    if (ctr == 0) {
      for (int i = 0; i < s.length(); i++) {
        appears.insert(s[i]);
      }
    } else {
      for (int i = 0; i < s.length(); i++) {
        if(appears.find(s[i]) != appears.end()) {
          reapp.insert(s[i]);
        }
      }

      appears.clear();
      appears.insert(reapp.begin(), reapp.end());
      reapp.clear();
    }

    if(ctr == 2) {
      for (auto& it: appears) {
        sum += priority(it);
      }
      cout << endl;
      appears.clear();
    }

    ctr = (ctr + 1) % 3;
  }

  cout << sum << "\n";

  return 0;
}