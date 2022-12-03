#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int m[25][25];
bool vis[25][25] = {false};

int count(int r, int c, int v) {
  if (r < 0 || r >= 25 || c < 0 || c >= 25 || vis[r][c] || m[r][c] != v) return 0;

  vis[r][c] = true;

  return 1 + count(r, c + 1, v) + count(r + 1, c, v) + count(r, c - 1, v) + count(r - 1, c, v);
}

int main() {
  FAST;

  int M, N, B, K;

  cin >> M >> N;

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cin >> m[i][j];
    }
  }

  cin >> B >> K;

  int c = count(B, K, m[B][K]);

  cout << c * (c - 1);

  return 0;
}