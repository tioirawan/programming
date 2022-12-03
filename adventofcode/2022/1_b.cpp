#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

// ans: 210957
int main() {
  FAST;

  string t;

  vector<int> sum;
  
  int s = 0;
  while(getline(cin, t)) {
    if(t.empty()) {
      sum.push_back(s);
      s = 0;
      continue;
    }

    s += stoi(t);
  }

  sort(sum.begin(), sum.end(), greater<int>());

  cout << sum[0] + sum[1] + sum[2] << endl;

  return 0;
}