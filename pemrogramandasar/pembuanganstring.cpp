#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  string S, T;

  cin >> S >> T;

  while(S.find(T) != -1) {
    S.erase(S.find(T), T.length());
  }

  cout << S;

  return 0;
}