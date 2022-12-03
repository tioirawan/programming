#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  double a = 12;
  double b = 4;
  double mod = 6;

  // contoh salah
  double c = fmod(fmod(a, mod) / fmod(b, mod), mod);

  cout << "hasil salah: " << c << "\n";

  // contoh benar (a/b = a * b^-1)
  double d = fmod(fmod(a, mod) * pow(fmod(b, mod) , -1), mod);

  cout << "hasil benar: " << d << "\n";

  return 0;
}