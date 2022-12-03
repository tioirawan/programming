#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  // cout << strcmp("budi", "ani");
  // cout << ("budi" > "ani");
  // cout << (((string)"budi").compare("ani"));

  int n, q;
  cin >> n >> q;

  vector<pair<string, int>> nums(n);

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int num;
    cin >> num;
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

      // cout << l << " " << r << " " << mid << endl;
      // cout << sc << " " << cur.first << " " << sc.compare(cur.first) << endl;

      if (cur.first == sc) {
        cout << cur.second << endl;
        found = 1;
        break;
      } else if (sc.compare(cur.first) < 0) {
        // cout << "should be on the left\n";
        r = mid - 1;
      } else {
        // cout << "should be on the right\n";

        l = mid + 1;
      }
    }

    if(!found) {
      cout << "NIHIL\n";
    }
  }

  return 0;
}