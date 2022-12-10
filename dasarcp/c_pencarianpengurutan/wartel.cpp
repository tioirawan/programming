#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  int n, q;
  cin >> n >> q;

  vector<pair<string, string>> nums(n);

  for (int i = 0; i < n; i++) {
    string s;cin >> s;
    string num;cin >> num;
    nums[i] = make_pair(s, num);
  }

  while (q-- > 0) {
    string sc;
    cin >> sc;

    int l = 0;
    int r = n - 1;
    int found = 0;

    while (r >= l) {
      int mid = (l + r) / 2;
      auto cur = nums[mid];

      if (cur.first == sc) {
        cout << cur.second << endl;
        found = 1;
        break;
      } else if (sc < cur.first) {
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    }

    if(!found) {
      cout << "NIHIL\n";
    }
  }

  return 0;
}
