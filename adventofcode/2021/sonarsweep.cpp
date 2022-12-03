#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int n;
  int pn = INT_MAX;
  int s = 0;

  while(scanf("%d", &n) != EOF) {
    if(n > pn) s++; 
    pn = n;
  }

  cout << s;

  return 0;
}