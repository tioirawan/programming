#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int m[128][128];
vector<string> ans;

bool isHomogen(int r, int c, int k) {
  int fv = m[r][c];

  for (int i = r; i < r + k; i++) {
    for (int j = c; j < c + k; j++) {
      if (m[i][j] != fv) return false;
    }
  }

  return true;
}

int quadtree(int r, int c, int k, string pos) {
  if (isHomogen(r, c, k)) {
    if (m[r][c] == 1) {
      ans.push_back(to_string(m[r][c]) + pos);
      return 1;
    }
    return 0;
  }

  int nk = k / 2;
  int q0 = quadtree(r, c, nk, pos + "0");
  int q1 = quadtree(r, c + nk, nk, pos + "1");
  int q2 = quadtree(r + nk, c, nk, pos + "2");
  int q3 = quadtree(r + nk, c + nk, nk, pos + "3");

  return q0 + q1 + q2 + q3;
}

int main() {
  FAST;

  int r, c;
  cin >> r >> c;

  int maxRc = max(r, c);
  int pow2 = 1;

  while (pow2 < maxRc) {
    pow2 *= 2;
  }

  for (int i = 0; i < pow2; i++) {
    for (int j = 0; j < pow2; j++) {
      m[i][j] = 0;
    }
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> m[i][j];
    }
  }

  cout << quadtree(0, 0, pow2, "") << "\n";

  for (auto i = ans.begin(); i != ans.end(); i++)
  {
    cout << *i << "\n";
  }
  
  return 0;
}