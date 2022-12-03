#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  double N;
  
  cin >> N;

  int d = trunc(N);

  if(N == d) {
    cout << d << " " << d;
  } else if(N > 0) {
    cout << d << " " << d + 1;
  } else {
    cout << d - 1 << " " << d ;
  }

  return 0;
}