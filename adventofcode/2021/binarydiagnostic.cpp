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

  int L = 12;

      char c[L];

  int c0[L] = {0};
  int c1[L] = {0};

  while (scanf("%s", &c) != EOF)
  {
    for (int i = 0; i < L; i++)
    {
      if (c[i] == '0')
      {
        c0[i]++;
      }
      else
      {
        c1[i]++;
      }
    }
  }

  char gr[L];
  char er[L];

  for (int i = 0; i < L; i++)
  {
    if (c0[i] > c1[i])
    {
      gr[i] = '0';
      er[i] = '1';
    }
    else
    {
      gr[i] = '1';
      er[i] = '0';
    }
  }

  cout << stoi(gr, 0, 2) * stoi(er, 0, 2);

  return 0;
}