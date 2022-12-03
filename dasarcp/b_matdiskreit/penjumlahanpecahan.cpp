#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  ll A, B, C, D, E, F;

  cin >> A >> B >> C >> D;

  if(B == D) {
    E = A + B;
    F = B;
  } else {
    E = (A * D) + (B * C);
    F = B * D;
  }

  ll fpb = __gcd(E, F);

  cout << E / fpb << " " << F / fpb << "\n";

  return 0;
}
