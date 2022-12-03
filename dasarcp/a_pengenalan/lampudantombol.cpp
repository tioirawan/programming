#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  int l = 0;

  ll N;
  
  cin >> N;

  for (ll i = 1; i <= N; i++)
  {
    if(N % i == 0) {
      l = 1 - l;
    }
  }

  if(l) {
    cout << "lampu menyala" << "\n";
  } else {
    cout << "lampu mati" << "\n";
  }
  

  return 0;
}