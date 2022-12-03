#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  int r, c;

  cin >> r >> c;

  string blocks[r];

  getline(cin, blocks[0]);

  for (int i = 0; i < r; i++) {
    getline(cin, blocks[i]);
  }

  int top = 0;
  int lastStanding[c] = {0};  // last standing
  string fullBlock(c, '1');
  string emptyBlock(c, '0');

  int lastRow = -1;

  do {
    bool topFounded = false;
    lastRow = -1;

    for (int i = top; i < r; i++) {
      if (!topFounded) { 
        bool h = blocks[i].find("1") != string::npos;

        if (h) {
          topFounded = true;
          top = i;
        }
      }

      bool isFull = blocks[i].find(fullBlock) != string::npos;

      if (isFull) {
        blocks[i] = emptyBlock;
        lastRow = i;
      }
    }

    if (lastRow != -1) {
      // pencarian last standing blocks
      for (int k = 0; k < c; k++) {
        int offset = 1;
        while (lastRow + offset < r && blocks[lastRow + offset][k] != '1') {
          offset++;
        }
        lastStanding[k] = lastRow + offset;
      }

      // proses meruntuhkan
      for (int i = 0; i < c; i++) {
        int numOfBlock = 0;

        for (int j = top; j < lastStanding[i]; j++) {
          if (blocks[j][i] == '1') {
            numOfBlock++;
            blocks[j][i] = '0';
          }
        }

        for (int k = lastStanding[i] - numOfBlock; k < lastStanding[i]; k++) {
          blocks[k][i] = '1';
        }
      }
    }

  } while (lastRow != -1);

  for (int i = 0; i < r; i++) {
    cout << blocks[i] << "\n";
  }

  return 0;
}