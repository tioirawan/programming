#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int kpk(int a, int b) {
  return a * b / __gcd(a, b);
}

int main() {
  FAST;

  int t;cin>>t;

  int k = 1;

  while(t-->0) {
    int x;cin>>x;

    k = kpk(k, x);
  }

  cout << k << "\n";

  return 0;
}