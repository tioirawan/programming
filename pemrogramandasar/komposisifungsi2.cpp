#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int f(int A, int B, int x, int K) {
  int res = abs(A * x + B);

  if(K <= 1) return res;

  return f(A, B, res, K - 1);
}

int main() {
  FAST

  int A, B, K, x;
  
  cin >> A >> B >> K >> x;

  cout << f(A, B, x, K) << "\n";


  return 0;
}