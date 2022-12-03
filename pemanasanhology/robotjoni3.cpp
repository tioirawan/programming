

#include <bits/stdc++.h>
#define ll long long int
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main()
{
  FAST

  int n;

  cin >> n;

  ll x = 0, y = 0;


  vector<pair<ll, ll>> ops;
  vector<string> opsname;

  ll off = 0;
  int it = 0;
  while (n-- > 0)
  {
    string s;
    ll v;

    cin >> s >> v;

    if(it == 0 || opsname[it - 1] != s) {
      opsname.push_back(s);
      ops.push_back({off + 1, off + v});
      it++;
    } else {
      ops[it - 1].second = off + v;
    }

    off += v;
  }

  int opn;

  cin >> opn;

  while (opn-- > 0)
  {
    ll op;

    cin >> op;

    for (int i = 0; i < ops.size(); i++)
    {
      if (op >= ops[i].first && op <= ops[i].second)
      {
        if (opsname[i] == "kanan")
        {
          x += 1;
          break;
        }
        else if (opsname[i] == "kiri")
        {
          x -= 1;
          break;
        }
        else if (opsname[i] == "atas")
        {
          y += 1;
          break;
        }
        else if (opsname[i] == "bawah")
        {
          y -= 1;
          break;
        }
      }
    }
  }

  cout << "(" << x << "," << y << ")";
  
  return 0;
}