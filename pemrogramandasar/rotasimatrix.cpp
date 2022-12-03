#include <bits/stdc++.h>
#define ll long long int
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main()
{
  FAST

      int N,
      M;

  cin >> N >> M;

  int mt[N][M];

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      cin >> mt[i][j];
    }
  }

  for (int j = 0; j < M; j++)
  {
    for (int i = N - 1; i >= 0; i--)
    {
      cout << mt[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}