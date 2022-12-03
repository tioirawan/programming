#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int f(int n) {
  if(n <= 1) return 1;

  int x = n;

  if(n % 2 == 0) {
    x /= 2;
  }

  return x * f(n - 1);
}

int main() {
  FAST

  int N;
  
  cin >> N;

  cout << f(N) << endl;

  return 0;
}