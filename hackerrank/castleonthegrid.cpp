#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int vis[100][100];

int count(vector<string> g, int r, int c, int gr, int gc) {
  int n = g.size();
  if (r < 0 || c << 0 || r > n - 1 || c > n - 1 || vis[r][c] || g[r][c] == 'X') return INT_MAX;

  vis[r][c] = 1;

  if (r == gr && c == gc) return 0;

  int t = count(g, r - 1, c, gr, gc);
  int rg = count(g, r, c + 1, gr, gc);
  int b = count(g, r + 1, c, gr, gc);
  int l = count(g, r, c - 1, gr, gc);

  int mv = min({t, rg, b, l});

  if (mv == INT_MAX) mv = 0;

  return 1 + mv;
}

// .X.
// .X.
// ...

int main() {
  FAST;

  memset(vis, 0, 10000 * sizeof(int));

  int n;
  cin >> n;

  vector<string> g;

  for (int i = 0; i < n; i++) {
    string x;
    cin >> x;
    g.push_back(x);
  }

  int sr, sc, gr, gc;
  cin >> sr >> sc >> gr >> gc;

  cout << count(g, sr, sc, gr, gc);

  return 0;
}