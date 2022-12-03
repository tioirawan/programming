#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  char a;
  char b;

  map<char, char> win;
  win['A'] = 'Y';
  win['B'] = 'Z';
  win['C'] = 'X';

  map<char, char> lose;
  lose['A'] = 'Z';
  lose['B'] = 'X';
  lose['C'] = 'Y';

  map<char, char> draw;
  draw['A'] = 'X';
  draw['B'] = 'Y';
  draw['C'] = 'Z';

  unordered_map<char, int> val;
  val['X'] = 1;
  val['Y'] = 2;
  val['Z'] = 3;

  int s = 0;
  while(scanf("%c %c\n", &a, &b) != EOF) {
    if(b == 'X') { // lose
      s += val[lose[a]];
    } else if (b == 'Y') { // draw
      s += val[draw[a]] + 3;
    } else {
      s += val[win[a]] + 6;
    }
  }

  cout << s << endl;
  
  return 0;
}