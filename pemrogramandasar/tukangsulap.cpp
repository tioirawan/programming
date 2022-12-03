#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int balls[2][1001];

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  FAST

  int n;
  cin >> n;

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> balls[i][j];
    }
  }

  int t;
  cin >> t;

  while(t-->0) {
    char P, Q;
    int x, y;

    cin >> P >> x >> Q >> y;

    int p = P - 'A';
    int q = Q - 'A';

    swap(balls[p][x-1], balls[q][y-1]);
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << balls[i][j] << " ";
    }
    cout << "\n";
  }
  

  return 0;
}