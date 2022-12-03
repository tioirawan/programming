#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  char command[7];
  int value;

  int x = 0, depth = 0;

  while(scanf("%s%d", &command, &value) != EOF) {
    string cmd = command;
    if(cmd == "forward") {
      x += value;
    } else if(cmd == "down") {
      depth += value;
    } else {
      depth -= value;
    }
  }

  cout << x * depth;

  return 0;
}