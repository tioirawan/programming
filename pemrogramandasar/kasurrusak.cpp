#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

bool isPalindrome(string text) {
  if(text.length() <= 1) return true;

  if(text[0] != text[text.length() - 1]) return false;

  return isPalindrome(text.substr(1, text.length() - 2));
}

int main() {
  FAST

  string S;
  
  cin >> S;

  if(isPalindrome(S)) {
    cout << "YA" << endl;
  } else {
    cout << "BUKAN" << endl;
  }

  return 0;
}