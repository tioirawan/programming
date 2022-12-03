#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int priority(char x) {
  if(x > 'a') {
    return x - 'a' + 1;
  } else {
    return x - 'A' + 27;
  }
}

int main() {
  FAST;

  string s;

  int sum = 0;
  while(getline(cin, s)) {
    set<char> appears; 
    set<char> reapp;

    int mid = s.length() / 2;

    for (int i = 0; i < s.length(); i++)
    {
      if(i < mid) {
        appears.insert(s[i]);
      } else if(appears.find(s[i]) != appears.end()) {
        reapp.insert(s[i]);
      }
    }
    
    for (auto& it: reapp) {
      sum += priority(it);
    }
  }

  cout << sum << "\n";

  return 0;
}