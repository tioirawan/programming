#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

bool isPrime(int n)
{
  int dc = 0;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      if(dc == 1) return false;
      else dc++;
    }
  }
  return true;
}

int main() {
  FAST

  int N;
  
  cin >> N;

  while(N-->0) {
    int x;
    cin >> x;
    isPrime(x) ? cout << "YA\n" : cout << "BUKAN\n";
  }

  return 0;
}