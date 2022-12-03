#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int N;
  
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if(j < N -1 - i) {
        cout << " ";
      } else {
        cout << "*";
      }
    }
    cout << "\n";
  }
  

  return 0;
}