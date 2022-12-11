#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  int N;
  cin >> N;
  vector<int> a(N);

  for (int i = 0; i < N; i++) {
    int x;
    cin >> x;
    a[i] = x;
  }

  int Q;
  cin >> Q;

  while (Q-- > 0) {
    int x, y;

    cin >> x >> y;

    int l = 0;
    int r = N - 1;

    int rl = 0;
    int rr = 0;

    while (l != r) {
      int mid = (l + r) / 2;

      if(a[mid] <= x) {
        l = mid+1;
      } else {
        r = mid;
      }
    }

    rl = l;
    r = N - 1;

    while (l != r) {
      int mid = (l + r + 1) / 2;

      if(a[mid] <= y) {
        l = mid;
      } else {
        r = mid-1;
      }
    }

    rr = l;

    if(rl > rr) {
      cout << 0 << endl;
    } else if (a[rl] <= x || a[rr] > y) {
      cout << 0 << endl;
    } else {
      cout << rr - rl + 1 << endl;
    }
  }

  return 0;
}