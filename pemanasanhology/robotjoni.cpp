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

      ll n;

  cin >> n;

  ll x = 0, y = 0;

  vector<pair<ll, ll>> ops;

  ll tot = 0;

  while (n-- > 0)
  {
    string s;
    ll v;

    cin >> s >> v;

    tot += v % MOD;

    ll op = 0;

    if (s == "kanan")
    {
      op = 1;
    }
    else if (s == "kiri")
    {
      op = 2;
    }
    else if (s == "atas")
    {
      op = 3;
    }
    else if (s == "bawah")
    {
      op = 4;
    }

    ops.push_back(make_pair(op, tot));
  }

  ll opn;

  cin >> opn;

  vector<ll> opv;

  while (opn-- > 0)
  {
    ll op;

    cin >> op;

    opv.push_back(op);
  }

  sort(opv.begin(), opv.end());

  ll lastOps = 0;

  for (ll j = 0; j < opv.size(); j++)
  {
    ll op = opv[j];

    for (ll i = lastOps; i < ops.size(); i++)
    {
      if (op <= ops[i].second)
      {
        if (ops[i].first == 1)
        {
          x += 1;
          x %= MOD;
          lastOps = i;
          break;
        }
        else if (ops[i].first == 2)
        {
          x -= 1;
          x %= MOD;
          lastOps = i;
          break;
        }
        else if (ops[i].first == 3)
        {
          y += 1;
          y %= MOD;
          lastOps = i;
          break;
        }
        else
        {
          y -= 1;
          y %= MOD;
          lastOps = i;
          break;
        }
      }
    }
  }

  cout << "(" << x << "," << y << ")";

  return 0;
}