#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  string S;

  cin >> S;

  for (int i = 0; i < S.length(); i++)
  {
    if(S[i] < 97) {
      S[i] += 32;
    } else {
      S[i] -= 32;
    }
  }

  cout << S << endl;
  

  return 0;
}