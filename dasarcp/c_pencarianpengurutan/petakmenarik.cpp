#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  int n, m, k;
  cin >> n >> m >> k;

  int p[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> p[i][j];
    }
  }

  for (int j = 0; j < m; j++) {
    for (int i = 0; i < n; i++) {
      int t = i <= 0 ? 1 : p[i - 1][j];
      int b = i >= n - 1 ? 1 : p[i + 1][j];
      int r = j >= m - 1 ? 1 : p[i][j + 1];
      int l = j <= 0 ? 1 : p[i][j - 1];

      int tot = t * b * r * l;

      if (tot == k) {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }

  cout << "0 0" << endl;

  return 0;
}