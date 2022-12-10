#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

vector<string> CRT = {
    "........................................",
    "........................................",
    "........................................",
    "........................................",
    "........................................",
    "........................................",
};

int cycle = 0;
int x = 1;
int row = 0;

void tick() {
  int crtCol = cycle % CRT[0].size();
  if (abs(crtCol - x) <= 1) {
    CRT[row][crtCol] = '#';
  }

  cycle++;

  if (cycle % CRT[0].size() == 0) {
    row++;
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

  for (auto row : CRT) {
    cout << row << endl;
  }

  return 0;
}