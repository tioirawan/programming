#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  ll N;

  cin >> N;

  ll s = sqrt(N);

  if(s * s != N) {
    cout << "lampu mati" << "\n";
  } else {
    cout << "lampu menyala" << "\n";
  }

  return 0;
}