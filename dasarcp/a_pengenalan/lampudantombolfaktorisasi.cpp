#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  ll N;

  cin >> N;

  int cp = 0;

  int divisorCount = 1;

  for (int div = 2; div * div <= N; div++) {
    int factorCount = 0;

    while (N % div == 0) {
      N /= div;
      factorCount++;
    }

    if (factorCount > 0) {
      divisorCount *= 1 + factorCount;
    }
  }


  if (N > 1) {
    divisorCount *= 2;
  }

  if(divisorCount %  2 == 0) {
    cout << "lampu mati" << "\n";
  } else {
    cout << "lampu menyala" << "\n";
  }

  return 0;
}