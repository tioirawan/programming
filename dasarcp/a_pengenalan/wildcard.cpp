#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

// hanya bisa check 1 *
bool isMatch(string wildcard, string value) {
  bool hasWc = wildcard.find('*') != string::npos;

  if (!hasWc) return wildcard == value;

  if (wildcard.size() == 1) return true;

  int vi = 0;
  for (int i = 0; i < wildcard.length(); i++) {
    char c = wildcard[i];

    if (c != '*') {
      if (c != value[vi]) return false;
      vi++;
    } else {
      while (wildcard.substr(i + 1).find(value.substr(vi)) == string::npos && vi < value.length()) {
        vi++;
      }
    }
  }

  return true;
}

int main() {
  FAST;

  string wildcard;
  cin >> wildcard;

  int N;

  cin >> N;

  while (N-- > 0) {
    string s;
    cin >> s;
    if (isMatch(wildcard, s)) {
      cout << s << "\n";
    }
  }

  return 0;
}