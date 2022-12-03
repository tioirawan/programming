#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  int n, k;
  cin >> n >> k;

  int minv = INT_MAX;
  int mind = INT_MAX;

  while(n-->0) {
    int t; cin >> t;
    int d = abs(k - t);
    if(d < mind || (mind == d && t < minv)) {
      minv = t;
      mind = d;
    }
  }

  cout << minv << endl;

  return 0;
}