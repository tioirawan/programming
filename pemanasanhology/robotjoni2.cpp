#include <bits/stdc++.h>
#define ll long long int
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007

using namespace std;

vector<int> ops;

int main()
{
  FAST

      int n;

  cin >> n;

  ll x = 0, y = 0;

  while (n-- > 0)
  {
    string s;
    int v;

    cin >> s >> v;

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

    while (v-- > 0)
    {
      ops.push_back(op);
    }
  }

  int opn;

  cin >> opn;

  while (opn-- > 0)
  {
    ll nm;

    cin >> nm;

    int op = ops[nm - 1];

    if (op == 1)
    {
      x++;
    }
    else if (op == 2)
    {
      x--;
    }
    else if (op == 3)
    {
      y++;
    }
    else if (op == 4)
    {
      y--;
    }
  }

  cout << "(" << x << "," << y << ")";

  return 0;
}