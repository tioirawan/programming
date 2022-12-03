#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

bool isZigZag(int a[], int n) {
  if(n <= 2) return true;

  for (int i = 1; i < n - 1; i++) {
    bool isB = a[i] > a[i - 1] && a[i] > a[i + 1];
    bool isL = a[i] < a[i - 1] && a[i] < a[i + 1];

    if(!(isB || isL)) {
      return false;
    }
  }

  return true;
}

void permutasi(int n, int d, int v[], bool f[]) {
  if (d == n) {
    if(!isZigZag(v, n)) return;
    for (int i = 0; i < n; i++) {
      cout << v[i];
    }
    cout << "\n";
  } else {
    for (int i = 1; i <= n; i++) {
      if (f[i]) continue;

      f[i] = true;
      v[d] = i;
      permutasi(n, d + 1, v, f);
      f[i] = false;
    }
  }
}

int main() {
  FAST;

  int n;
  
  cin >> n;

  int v[n];
  bool f[n + 1] = {false};

  permutasi(n, 0, v, f);

  // int a[] = {1, 10, 1, 2, 1, 2, 1};

  // cout << isZigZag(a, 7);

  return 0;
}