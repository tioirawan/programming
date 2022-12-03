#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int N;
  
  cin >> N;

  for (int i = 1; i <= N; i++)
  {
    if(i % 10 == 0) continue;

    if(i == 42) {
      cout << "ERROR\n";
      break;
    }

    cout << i << "\n";
  }
  

  return 0;
}