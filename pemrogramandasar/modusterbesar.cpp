#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int N;
  
  cin >> N;

  int arr[N];
  int count[1001] = {0};

  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];

    count[arr[i]]++;
  }

  int mc = INT_MIN;
  int mn = INT_MIN;

  for (int i = 0; i < 1001; i++)
  {
    int c = count[i];

    if(c >= mc) {
      mc = c;
      mn = i;
    }
  }

  cout << mn;

  return 0;
}