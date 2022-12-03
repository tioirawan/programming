#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  char a;
  char b;

  unordered_map<char, unordered_map<char, int>> outcome;
  outcome['A']['X'] = 3;
  outcome['A']['Y'] = 6;
  outcome['A']['Z'] = 0;

  outcome['B']['X'] = 0;
  outcome['B']['Y'] = 3;
  outcome['B']['Z'] = 6;

  outcome['C']['X'] = 6;
  outcome['C']['Y'] = 0;
  outcome['C']['Z'] = 3;

  unordered_map<char, int> val;
  val['X'] = 1;
  val['Y'] = 2;
  val['Z'] = 3;

  int s = 0;
  while(scanf("%c %c\n", &a, &b) != EOF) {
    s += val[b] + outcome[a][b];
  }

  cout << s << endl;
  
  return 0;
}