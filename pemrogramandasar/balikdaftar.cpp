#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int N, arr[101];

  int i=0;
  while(scanf("%d", &N) != EOF) {
    arr[i++] = N;
  }

  while(i > 0) {
    cout << arr[--i] << "\n";
  }

  return 0;
}