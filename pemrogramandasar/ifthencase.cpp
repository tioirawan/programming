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

      int N;

  cin >> N;

  int d = floor(log10(N) + 1);

  switch (d)
  {
  case 1:
    cout << "satuan";
    break;
  case 2:
    cout << "puluhan";
    break;
  case 3:
    cout << "ratusan";
    break;
  case 4:
    cout << "ribuan";
    break;
  case 5:
  default:
    cout << "puluhribuan";
    break;
  }

  return 0;
}