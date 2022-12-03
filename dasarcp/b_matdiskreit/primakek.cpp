#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

bool isPrime[1000005];
vector<int> primes;

void generate(int n) {
  isPrime[0] = false;
  isPrime[1] = false;

  for (int i = 2; i * i <= n; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= n; j += i) {
        isPrime[j] = false;
      }
    }
  }

  for (int i = 2; i <= n; i++) {
    if (isPrime[i]) {
      primes.push_back(i);
    }
  }
}

int main() {
  FAST;

  memset(isPrime, 1, sizeof(isPrime));
  generate(1e6);

  int N;

  cin >> N;

  while (N-- > 0) {
    int x;
    cin >> x;
    cout << primes[x - 1] << "\n";
  }

  return 0;
}