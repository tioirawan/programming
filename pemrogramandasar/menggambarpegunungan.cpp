#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

void drawMountain(int d) {
  if(d < 1) return;

  drawMountain(d - 1);
  for (int i = 0; i < d; i++)
  {
    cout << "*";
  }
  cout << "\n";
  drawMountain(d - 1);
}

int main() {
  FAST;

  int N;
  
  cin >> N;

  drawMountain(N);

  return 0;
}