#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

void combination(int n, int m, int d, int v[]) {
  if (d == m) {
    for (int i = 0; i < m; i++) {
      cout << v[i] + 1 << " ";
    }
    cout << "\n";
  } else {
    for (int i = d == 0 ? 0 : v[d - 1] + 1; i < n; i++) {
      v[d] = i;
      combination(n, m, d + 1, v);
    }
  }
}

int main() {
  FAST;

  int N, K;
  
  cin >> N >> K;

  int v[K];

  combination(N, K, 0, v);
  
  return 0;
}