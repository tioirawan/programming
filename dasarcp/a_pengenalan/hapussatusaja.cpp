#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

bool solve(string A, string B) {
  if (A.length() != B.length() + 1) return false;

  for (int i = 0; i < A.size(); i++)
  {
    string temp = A;
    temp.erase(i, 1);
    if(temp == B) return true;
  }
  
  return false;
}

int main() {
  FAST;

  string A, B;

  getline(cin, A);
  getline(cin, B);

  if (solve(A, B)) {
    cout << "Tentu saja bisa!\n";
  } else {
    cout << "Wah, tidak bisa :(\n";
  }

  return 0;
}