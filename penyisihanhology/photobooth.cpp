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

      ll n,
      m, a;

  cin >> n >> m >> a;

  if (n % a == 0)
  {

    n = n / a;
  }
  else
  {
    n = (n / a) + 1;
  }
  if (m % a == 0)
  {
    m = m / a;
  }
  else
  {
    m = (m / a) + 1;
  }

  cout << n * m << endl;

  return 0;
}