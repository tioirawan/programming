#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int x1, y1, x2, y2;

  cin >> x1 >> y1 >> x2 >> y2;

  cout << abs(x1 - x2) + abs(y1 - y2);

  return 0;
}