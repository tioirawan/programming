#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

void writePermutation(string S, int d, int v[], bool f[]) {
  if(d == S.length()) {
    cout << d << ": ";
    for (int i = 0; i < S.length(); i++)
    {
      cout << S[v[i]];
    }
    cout << endl;
  } else {
    for (int i = 0; i < S.length(); i++)
    {
      if(!f[i]) {
        f[i] = true;
        v[d] = i;
        writePermutation(S, d + 1, v, f);
        f[i] = false;
      }
    }
  }
}

int main() {
  FAST;

  string a = "abc";
  int v[a.length()] = {0};
  bool f[a.length() + 1] = {false};

  writePermutation(a, 0, v, f);

  return 0;
}