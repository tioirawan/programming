#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int m[128][128];

void fill(string pos, int r, int c, int k) {
  if (pos.length() == 0) {
    for (int i = r; i < r + k; i++) {
      for (int j = c; j < c + k; j++) {
        m[i][j] = 1;
      }
    }
    return;
  }

  char nextPos = pos[0];
  string newPos = pos.substr(1);
  int nk = k >> 1;

  if (nextPos == '0') {
    fill(newPos, r, c, nk);
  } else if (nextPos == '1') {
    fill(newPos, r, c + nk, nk);
  } else if (nextPos == '2') {
    fill(newPos, r + nk, c, nk);
  } else {
    fill(newPos, r + nk, c + nk, nk);
  }
}

int main() {
  FAST;

  int N;

  cin >> N;
  string ans[N];

  for (int i = 0; i < N; i++) {
    cin >> ans[i];
  }

  int r, c;
  cin >> r >> c;
  int maxRc = max(r, c);
  int pow2 = 1;
  while (pow2 < maxRc) pow2 *= 2;

  for (int i = 0; i < pow2; i++) {
    for (int j = 0; j < pow2; j++) {
      m[i][j] = 0;
    }
  }

  for (int i = 0; i < N; i++) {
    fill(ans[i].substr(1), 0, 0, pow2);
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << m[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}