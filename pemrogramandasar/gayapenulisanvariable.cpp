#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  string S;
  
  cin >> S;

  int hu = S.find('_');
  bool ic = hu != -1;

  while(hu != -1) {
    S.erase(hu, 1);
    if(S[hu] >= 'a') {
      S[hu] -= 32;
    }
    hu = S.find('_');
  }

  if(!ic) {
    for (int i = 0; i < S.length(); i++)
    {
      if(S[i] >= 'a') continue;;

      S[i] += 32;
      S.insert(i, "_");
    }
  }

  cout << S << endl;
  

  return 0;
}