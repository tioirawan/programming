#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

bool validPath(int posx, int posy, int xt, int yt, int xa, int ya, int dirx, int diry) {
  if(posx == xa && posy == ya) {
    return false;
  } else if((dirx == 1 && posx > xt) || (dirx == -1 && posx < xt)) {
    return false;
  } else if((diry == 1 && posy > yt) || (diry == -1 && posy < xt)) {
    return false;
  }
  return true;
}

string key(int posx, int posy) {
  return to_string(posx) + "," + to_string(posy);
}

ll countPath(int posx, int posy, int xt, int yt, int xa, int ya, int dirx, int diry, unordered_map<string, ll>& memo) {
  string memoKey = key(posx, posy);

  if(memo.find(memoKey) != memo.end()) { 
    return memo[memoKey];
  } 

  if(posx == xt && posy == yt) return 1;
  if(!validPath(posx, posy, xt, yt, xa, ya, dirx, diry)) return 0;

  memo[memoKey] = 
    ((countPath(posx + dirx, posy, xt, yt, xa, ya, dirx, diry, memo) % MOD)
    + (countPath(posx, posy + diry, xt, yt, xa, ya, dirx, diry, memo) % MOD)) % MOD;

  return memo[memoKey];
}

int main() {
  FAST

  int dirx, diry;
  int x0, y0, xt, yt, xa, ya;

  unordered_map<string, ll> memo;

  cin >> x0 >> y0 >> xt >> yt >> xa >> ya;

  dirx = xt > x0 ? 1 : -1;
  diry = yt > y0 ? 1 : -1;

  ll count = countPath(x0, y0, xt, yt, xa, ya, dirx, diry, memo);

  cout << count;

  return 0;
}