#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  char name[10000];

  while(scanf("%s", name) != EOF) {
    for(int i = strlen(name) - 1; i >= 0; i--) {
      if((name[i] == 'g' || name[i] == 'G') && (name[i-1] == 'n' || name[i-1] == 'N')) {
        cout << "ng";
        i--;
      } else  if((name[i] == 'h' || name[i] == 'H') && (name[i-1] == 'd' || name[i-1] == 'D')) {
        cout << "dh";
        i--;
      } else {
        cout << name[i];
      }
    }
    cout << " ";
  }

  return 0;
}