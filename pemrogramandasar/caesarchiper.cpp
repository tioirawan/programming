#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  string S;
  int K;

  cin >> S >> K;

  for (int i = 0; i < S.length(); i++)
  {
    S[i] = (S[i] - 'a' + K) % 26 + 'a';
  }

  cout << S << "\n";

  return 0;
}