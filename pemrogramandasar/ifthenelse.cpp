#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int N;
  
  cin >> N;

  if(N > 0) {
    cout << "positif";
  } else if(N < 0) {
    cout << "negatif";
  } else {
    cout << "nol";
  }

  return 0;
}