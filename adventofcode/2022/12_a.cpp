#include <bits/stdc++.h>
#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
#define deb(x) cout << #x << " = " << x << endl;
#define range(i, n) for (int i = 0; i < n; i++)
#define rangefrom(i, a, n) for (int i = a; i < n; i++)
#define rangestep(i, a, n, s) for (int i = a; i < n; i += s)
#define rangeback(i, n) for (int i = n - 1; i >= 0; i--)
#define loop(i, list) for (auto& i : list)
#define pb push_back
#define mp make_pair
#define pp(a, b) pb(mp(a, b))
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sizeof(x) (int)x.size()
#define endl "\n"
typedef long long ll;

using namespace std;

unordered_map<string, pair<int, int>> memo;

pair<int, int> countLeast(int level, vector<string> s, int r, int c, int er, int ec, unordered_map<string, bool>& vis) {
  if (r < 0 || r > s.size() - 1 || c < 0 || c > s[0].size() - 1) {
    return mp(-1, 0);
  }

  string space = "";
  range(i, level) space += "  ";

  string key = to_string(r) + "," + to_string(c);
  cout << space << "vis: " << key << endl;

  if (r == er && c == ec) {
    cout << space << "reached end\n"
         << endl;
    return mp(s[r][c] - 'a', 0);
  }

  // if (memo.find(key) != memo.end()) {
  //   cout << space << "memo: " << memo[key].F << " " << memo[key].S << endl
  //        << endl;
  //   return memo[key];
  // }
  if (vis[key] == true) {
    cout << space << "already visited\n"
         << endl;
    return mp(-1, 0);
  }

  vis[key] = true;

  pair<int, int> topCount = countLeast(level + 1, s, r - 1, c, er, ec, vis);
  pair<int, int> rightCount = countLeast(level + 1, s, r, c + 1, er, ec, vis);
  pair<int, int> bottomCount = countLeast(level + 1, s, r + 1, c, er, ec, vis);
  pair<int, int> leftCount = countLeast(level + 1, s, r, c - 1, er, ec, vis);

  vis[key] = false;


  cout << space << "so " << key << ":\n";
  cout << space;
  deb(topCount.F);
  deb(topCount.S);
  cout << space;
  deb(rightCount.F);
  deb(rightCount.S);
  cout << space;
  deb(bottomCount.F);
  deb(bottomCount.S);
  cout << space;
  deb(leftCount.F);
  deb(leftCount.S);

  // pair = (elevationGain, countOfPaths)
  // find least elevation gain
  vector<pair<int, int>> l = {topCount, rightCount, bottomCount, leftCount};
  vector<pair<int, int>> lv;

  copy_if(all(l), back_inserter(lv), [](auto a) {
    return a.F >= 0;
  });

  // sort l by elevation gain (put -1 at the end)
  sort(all(lv), [](auto a, auto b) {
    if (a.F <= -1) return false;
    if (a.F == b.F) return a.S < b.S;
    return a.F < b.F;
  });

  pair<int, int> result;

  if (lv.empty()) {
    result = mp(-1, 0);
    cout << space << "does have path\n";
  } else {
    result = lv[0];
    result.F += s[r][c] - 'a';
    result.S += 1;
  }

  cout << space << "result: " << result.F << " " << result.S << endl;

  // if (level == 1) {
    cout << endl;
  // }

  memo[key] = result;
  return memo[key];
}

int main() {
  IOS;

  vector<string> s;

  int sr, sc, er, ec;

  string line;
  int r = 0;
  while (getline(cin, line)) {
    range(i, sizeof(line)) {
      if (line[i] == 'S') {
        sr = r;
        sc = i;
        line[i] = 'a';
      } else if (line[i] == 'E') {
        er = r;
        ec = i;
        line[i] = 'z';
      }
    }

    s.pb(line);
    r++;
  }

  unordered_map<string, bool> vis;

  auto result = countLeast(0, s, 0, 1, er, ec, vis);

  cout << "Least elevation gain: " << result.F << endl;
  cout << "Number of paths: " << result.S << endl;

  return 0;
}