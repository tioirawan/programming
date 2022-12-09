#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

map<string, bool> vis;

bool isAdj(int x1, int y1, int x2, int y2) {
  int dx = abs(x1 - x2);
  int dy = abs(y1 - y2);

  return dx <= 1 && dy <= 1;
}

int main() {
  FAST;

  int pHx = 0, pHy = 0, Hx = 0, Hy = 0, Tx = 0, Ty = 0;

  int count = 0;

  map<char, pair<int, int>> dirs;
  dirs['L'] = {-1, 0};
  dirs['R'] = {1, 0};
  dirs['U'] = {0, 1};
  dirs['D'] = {0, -1};

  string mv;
  while (getline(cin, mv)) {
    char dir = mv[0];
    int val = stoi(mv.substr(2));

    while (val-- > 0) {
      pHx = Hx;
      pHy = Hy;
      Hx += dirs[dir].first;
      Hy += dirs[dir].second;

      if (!isAdj(Hx, Hy, Tx, Ty)) {
        Tx = pHx;
        Ty = pHy;
      }

      string key = to_string(Tx) + "," + to_string(Ty);
      if (vis.find(key) == vis.end()) {
        count++;
        vis[key] = 1;
      }
    }
  }

  cout << count << endl;

  return 0;
}