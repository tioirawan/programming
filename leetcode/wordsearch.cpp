#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

bool er(vector<vector<char>>& board, string word, int r, int c, int t, int vis[][6]) {
  if (r < 0 || c < 0 || r >= board.size() || c >= board[r].size()) return false;

  if (vis[r][c]) return false;

  bool nr = false;

  vis[r][c] = 1;

  if (board[r][c] == word[t]) {
    if (t >= word.length() - 1) {
      return true;
      }


    int nt = t + 1;
    nr =  er(board, word, r, c + 1, nt, vis) ||
          er(board, word, r + 1, c, nt, vis) || 
          er(board, word, r, c - 1, nt, vis) || 
          er(board, word, r - 1, c, nt, vis);
  }

  vis[r][c] = 0;

  return nr;
}

bool exist(vector<vector<char>>& board, string word) {
  if(word.length() > board.size() * board[0].size()) {
    return false;
  }

  unordered_map<char, int> occ;
  for(auto& row : board) for(auto& c : row) ++occ[c];
  for(auto& c : word) if(--occ[c] < 0) return false;

  int left = word.find_first_not_of(word[0]);
  int right = word.size() - word.find_last_not_of(word[word.size() - 1]);
  if(left > right) reverse(begin(word), end(word));

  for (int8_t i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      int vis[6][6] = {{0}};

      memset(vis, 0, 36 * sizeof(int));

      if (er(board, word, i, j, 0, vis)) {
        return true;
      }
    }
  }

  return false;
}

int main() {
  FAST;

  // vector<vector<char>> board = {
  //     {'A', 'B', 'C', 'E'},
  //     {'S', 'F', 'C', 'S'},
  //     {'A', 'D', 'E', 'E'},
  // };

  // string word = "ABC";

  // vector<vector<char>> board = {
  //     {'A', 'B', 'C', 'E'},
  //     {'S', 'F', 'C', 'S'},
  //     {'A', 'D', 'E', 'E'},
  // };

  // string word = "ABCB";

  //  vector<vector<char>> board = {
  //     {'A', 'B', 'C', 'E'},
  //     {'S', 'F', 'E', 'S'},
  //     {'A', 'D', 'E', 'E'},
  // };
  // string word = "ABCEFSADEESE";

  // vector<vector<char>> board = {
  //     {'A', 'B'},
  //     {'C', 'D'},
  // };

  // string word = "ACDB";

  vector<vector<char>> board = {
      {'A', 'A', 'A', 'A'},
      {'A', 'A', 'A', 'A'},
      {'A', 'A', 'A', 'A'},
  };

  string word = "AAAAAAAAAAAAA";

  // vector<vector<char>> board = {
  //     {'A', 'B', 'C', 'D'},
  //     {'X', 'I', 'X', 'E'},
  //     {'X', 'H', 'G', 'F'},
  //     {'X', 'X', 'X', 'X'},
  // };

  // string word = "ABCDEFGHIB";

  if (exist(board, word)) {
    cout << "true\n";
  } else {
    cout << "false\n";
  }

  return 0;
}