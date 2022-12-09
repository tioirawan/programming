#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

bool isAdj(int x1, int y1, int x2, int y2) {
  int dx = abs(x1 - x2);
  int dy = abs(y1 - y2);

  return dx <= 1 && dy <= 1;
}

// WOW, Im blown away by this.
// I didn't even think I would be able
// to solve this problem :)
int main() {
  FAST;

  unordered_map<char, pair<int, int>> dirs;
  dirs['L'] = {-1, 0};
  dirs['R'] = {1, 0};
  dirs['U'] = {0, 1};
  dirs['D'] = {0, -1};

  // part 1 can be solved just by changing the knots length to 2
  vector<pair<int, int>*> knots(10);

  for (auto& k : knots) {
    k = new pair{0, 0};
  }

  unordered_map<string, bool> vis;
  // mark initial position as visited, because it won't be marked from the loop
  vis["0,0"] = 1;

  string mv;
  while (getline(cin, mv)) {
    char dir = mv[0];
    int val = stoi(mv.substr(2));

    while (val-- > 0) {
      knots.front()->first += dirs[dir].first;
      knots.front()->second += dirs[dir].second;

      for (auto it = knots.begin() + 1; it != knots.end(); it++) {
        pair<int, int>* prev = *(it - 1);
        pair<int, int>* cur = *(it);

        if (isAdj(cur->first, cur->second, prev->first, prev->second)) break;

        cur->first += clamp(prev->first - cur->first, -1, 1);
        cur->second += clamp(prev->second - cur->second, -1, 1);

        if (*it == knots.back()) {
          string key = to_string(knots.back()->first) + "," + to_string(knots.back()->second);
          if (!vis[key])
            vis[key] = 1;
        }
      }
    }
  }

  cout << vis.size() << endl;

  // cleanup
  for (auto& k : knots) {
    delete k;
  }

  return 0;
}