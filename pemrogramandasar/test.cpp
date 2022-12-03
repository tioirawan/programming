#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  for (int i = 0; i < 100000000; i++)
  {
    int a = i + i * i - i / i % MOD;

    if(a == a) {
      a /= 2;
    }
    if(i % 10000 == 0) {
      cout << abs(a);
    }
  }

  cout << "done"; 
  

  return 0;
}