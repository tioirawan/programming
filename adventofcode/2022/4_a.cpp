#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  string a;

  int sum = 0;
  while(getline(cin, a)) {
    int del = a.find(",");
    string f = a.substr(0, del);
    string e = a.substr(del + 1);
    int fdel = f.find("-");
    int edel = e.find("-");
    int a1 = stoi(f.substr(0, fdel));
    int a2 = stoi(f.substr( fdel + 1));
    int b1 = stoi(e.substr(0, edel));
    int b2 = stoi(e.substr( edel + 1));

    if((a1 >= b1 && a2 <= b2) || (b1 >= a1 && b2 <= a2)) {
      sum++;
    }
  }

  cout << sum << endl;

  return 0;
}