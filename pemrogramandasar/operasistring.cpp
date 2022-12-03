#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  string s1, s2, s3, s4;

  cin >> s1 >> s2 >> s3 >> s4;

  s1.erase(s1.find(s2), s2.length());
  s1.insert(s1.find(s3) + s3.length(), s4);

  cout << s1 << endl;

  return 0;
}