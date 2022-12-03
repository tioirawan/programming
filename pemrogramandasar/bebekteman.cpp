#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int A, B;

  cin >> A >> B;

  cout << "masing-masing " << A / B << "\n";
  cout << "bersisa " << A % B << "\n";

  return 0;
}