#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int faktorial(int n);

int main() {
  FAST

  int N;
  
  cin >> N;

  cout << faktorial(N);

  return 0;
}

int faktorial(int n) {
  if(n <= 1) return 1;

  return faktorial(n - 1) * n;
}