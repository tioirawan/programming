#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int kedekatan(int xi, int yi, int xj, int yj, int d) {
  return pow(abs(xi - xj), d) + pow(abs(yi - yj), d);
}

int main() {
  FAST

  int N, D;

  cin >> N >> D;
  int X[N];
  int Y[N];
  
  for (int i = 0; i < N; i++)
  {
    cin >> X[i] >> Y[i];
  }

  int mx = INT_MIN;
  int mn = INT_MAX;

  bool res[N][N] = {false};

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if(i == j || res[i][j]) continue;

      int r = kedekatan(X[i], Y[i], X[j], Y[j], D);

      mx = max(mx, r);
      mn = min(mn, r);

      res[i][j] = true;
      res[j][i] = true;
    }
  }

  cout << mn << " " << mx << "\n";
  

  return 0;
}