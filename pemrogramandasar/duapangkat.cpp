#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int N;
  
  cin >> N;

  while(N % 2 == 0) {
    N /= 2;
  }

  if(N == 1) {
    cout << "ya";
  } else {
    cout << "bukan";
  }

  return 0;
}