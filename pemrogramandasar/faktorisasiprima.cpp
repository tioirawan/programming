#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;


void faktorisasiPrima(int n) {
  int c = 2;

  while(n > 1 && c * c < n) {
    int count = 0;

    while(n != c && n % c == 0) {
      count++;
      n /= c;
    }

    if(n == c) {
      count++;
    }

    if(count != 0) {
      count == 1 ?  cout << c : cout << c << "^" << count;

      if(n != c) {
        cout << " x ";
      }
    }
    c++;
  }

  if(n != c - 1) {
    cout << n;
  }
}

int main() {
  FAST

  int N;
  
  cin >> N;

  faktorisasiPrima(N);

  return 0;
}