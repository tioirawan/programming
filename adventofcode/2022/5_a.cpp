#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

int main() {
  FAST;

  // stdin: (ganti space jadi x)
  //  x  [D]  x
  // [N] [C]  x 
  // [Z] [M] [P]
  //  1   2   3 

  // int count = 3; // sesuain sama jumlah container
  // int height = 3; // sesuain sama tinggi container

  int count = 9;
  int height = 8;

  vector<stack<string>> v(count);
  string a;
  int i = 0;
  int tot = 0;
  while(cin >> a) {
    ++tot;

    if(a == "x") {
      i = (i + 1) % count;
      continue;
    }

    a.replace(0, 1, "");
    a.replace(1, 1, "");

    v[i].push(a);
    // cout << "Adding " << a << " to " << i + 1 << endl;

    i = (i + 1) % count;

    if(tot == (count * height)) break;
  }

  for (int i = 0; i < count; ++i)
  {
    // bersihin input stream nama stack
    string temp; cin >> temp;
  }
  
  for(int i = 0; i < count; i++) {
    stack<string> s;
    while(!v[i].empty()) {
      s.push(v[i].top());
      v[i].pop();
    }
    v[i] = s;
  }

  string action;
  while(getline(cin, action)) {
    if(action.find("move") == string::npos) continue;
    
    stringstream ss(action);
    string temp;
    int n;
    int from;
    int to;

    ss >> temp >> n >> temp >> from >> temp >> to;

    while (n-->0)
    {
      v[to - 1].push(v[from - 1].top());
      v[from - 1].pop();
    }
  }

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i].top();
  }

  return 0;
}