#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int strength = 0;
int cycle = 0;
int x = 1;

void tick() {
  cycle++;
  if ((cycle - 20) % 40 == 0) {
    strength += x * cycle;
  }
}

int main() {
  FAST;

  string instruction;
  while (getline(cin, instruction)) {
    if (instruction == "noop") {
      tick();
      continue;
    }

    int val = stoi(instruction.substr(5));

    tick();
    tick();
    x += val;
  }

  cout << strength << endl;

  return 0;
}