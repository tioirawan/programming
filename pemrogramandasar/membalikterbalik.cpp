#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int reverse(int n) {
  int result = 0;

  while(n > 0)  {
    int lastd = n % 10;
    n /= 10;
    result = result * 10 + lastd;
  }

  return result;
}

int main() {
  FAST

  int a,b,c;
  cin >> a >> b;
  c = reverse(reverse(a) + reverse(b));
  cout << c << endl;

  return 0;
}