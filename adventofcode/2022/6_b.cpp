#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

void find(string signal) {
  for (int i = 0; i < signal.size() - 4; i++)
  {
    string sub = signal.substr(i, 14);

    unordered_map<char, bool> occ;

    bool hasDups = false;

    for (int i = 0; i < sub.size(); i++)
    {
      if(!occ[sub[i]]) {
        occ[sub[i]] = true;
      } else {
        hasDups = true;
        break;
      }
    }
    
    if(!hasDups) {
      cout << i + 14 << endl;
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