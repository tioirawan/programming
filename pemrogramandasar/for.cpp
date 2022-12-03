#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int N;
  
  cin >> N;

  int s = 0;

  for (int i = 0; i < N; i++)
  {
    int t;
    cin >> t;
    s += t;
  }

  cout << s;
  

  return 0;
}