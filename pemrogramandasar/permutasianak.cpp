#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

void permutasiRekursif(int depth, int n, string val[], int ref[], bool used[]) {
  if (depth == n) {
    for (int k = 0; k < n; k++) {
      cout << val[ref[k]] << " ";
    }
    cout << "\n";
  } else {
    for (int k = 0; k < n; k++) {
      if (!used[k]) {
        used[k] = true;
        ref[depth] = k;
        permutasiRekursif(depth + 1, n, val, ref, used);
        used[k] = false;
      }
    }
  }
}

int main() {
  FAST;

  string a[] = {"tio", "fikril", "arif", "diof", "fito", "fino", "yosa"};
  int n = sizeof(a)  / sizeof(string);
  int ref[n];
  bool used[n];

  permutasiRekursif(0, n, a, ref, used);

  // for (int i = 0; i < 3; i++) {
  //   for (int j = 0; j < 3; j++) {
  //     for (int k = 0; k < 3; k++) {
  //       if(i == j || j == k || i == k) continue;
  //       cout << a[i] << a[j] <<a[k] <<"\n";
  //     }
  //   }
  // }

  return 0;
}