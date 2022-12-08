#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int ctoi(char c) {
  return c - '0';
}

int isVisible(vector<string> v, int h, int r, int c, int dr, int dc) {
  if (
      (dr == -1 && r == 0) ||
      (dr == 1 && r == v.size() - 1) ||
      (dc == -1 && c == 0) ||
      (dc == 1 && c == v[r].size() - 1)) return 0;

  if (ctoi(v[r + dr][c + dc]) >= h) {
    return 1;
  } else {
    return 1 + isVisible(v, h, r + dr, c + dc, dr, dc);
  }
}

int main() {
  FAST;

  vector<string> v;

  string line;
  while (getline(cin, line)) {
    v.push_back(line);
  }

  int mv = INT_MIN;

  vector<pair<int, int>> dirs = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v[i].size(); j++) {
      int h = ctoi(v[i][j]);
      int score = 1;
      for (auto dir : dirs) {
        score *= isVisible(v, h, i, j, dir.first, dir.second);
      }
      mv = max(mv, score);
    }
  }

  cout << mv;

  return 0;
}