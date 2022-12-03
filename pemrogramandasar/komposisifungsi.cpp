#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int F(int A, int B, int x) {
  return abs(A * x + B);
}

int main() {
  FAST

  int A, B, K, x;

  cin >> A >> B >> K >> x;

  int r = F(A, B, x);
  
  for (int i = 0; i < K-1; i++)
  {
    r = F(A, B, r);
  }

  cout << r;
  

  return 0;
}