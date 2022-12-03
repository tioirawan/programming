#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  string nama;
  int n;

  getline(cin, nama);

  cin >> n;

  while(n-->0) {
    cout << "Halo, " << nama << "!\n";
  }

  return 0;
}