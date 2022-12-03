#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

void kombinasiRekursif(int depth, int n, string val[], int ref[], bool used[]) {
  if (depth == 2) {
    for (int k = 0; k < 2; k++) {
      cout << val[ref[k]] << " ";
    }
    cout << "\n";
  } else {
    for (int k = depth == 0? 0: ref[depth - 1] + 1 ; k < n; k++) {
      ref[depth] = k;
      kombinasiRekursif(depth + 1, n, val, ref, used);
    }
  }
}

int fpb(int a, int b) {
  if(b % a == 0) {
    return a;
  } else {
    return fpb(b, a % b);
  }
}

int main() {
  FAST;

  // string a[] = {"tio", "fikril", "arif", "diof", "fito", "fino", "yosa"};
  // int n = sizeof(a)  / sizeof(string);
  // int ref[n];
  // bool used[n];

  // kombinasiRekursif(0, n, a, ref, used);

  cout << fpb(9, 3);


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