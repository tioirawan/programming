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

bool isVisible(vector<string> v, int h, int r, int c, int dr, int dc) {
  if (
      (dr == -1 && r == 0) ||
      (dr == 1 && r == v.size() - 1) ||
      (dc == -1 && c == 0) ||
      (dc == 1 && c == v[r].size() - 1)) return true;

  return h > ctoi(v[r + dr][c + dc]) && isVisible(v, h, r + dr, c + dc, dr, dc);
}

int main() {
  FAST;

  vector<string> v;

  string line;
  while (getline(cin, line)) {
    v.push_back(line);
  }

  int total = 0;

  vector<pair<int, int>> dirs = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v[i].size(); j++) {
      int h = ctoi(v[i][j]);
      for (auto dir : dirs) {
        if (isVisible(v, h, i, j, dir.first, dir.second)) {
          total++;
          break;
        }
      }
    }
  }

  cout << total;

  return 0;
}