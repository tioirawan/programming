#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int N, K;
  
  cin >> N >> K;

  for (int i = 1; i <= N; i++)
  {
    if(i % K == 0) {
      cout << "* ";
    } else {
      cout << i << " ";
    }
  }
  

  return 0;
}