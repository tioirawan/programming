#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

string toBin(int n) {
  if(n <= 0) return "";

  char ld = '0';

  if(n % 2 != 0)  {
    ld = '1';
  }

  return toBin(floor(n / 2)) + ld;
}

int main() {
  FAST

  int N;
  
  cin >> N;

  cout << toBin(N) << "\n";

  return 0;
}