#include <bits/stdc++.h>
#define IOS                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
#define deb(x) cout << #x << " = " << x << endl;
#define range(i, n) for (int i = 0; i < n; i++)
#define rangefrom(i, a, n) for (int i = a; i < n; i++)
#define rangestep(i, a, n, s) for (int i = a; i < n; i += s)
#define rangeback(i, n) for (int i = n - 1; i >= 0; i--)
#define loop(i, list) for (auto& i : list)
#define pb push_back
#define mp make_pair
#define pp(a, b) pb(mp(a, b))
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sizeof(x) (int)x.size()
#define endl "\n"
typedef long long ll;

using namespace std;

void ltrim(string& str) {
  str.erase(str.begin(), find_if(all(str), [](char ch) {
              return !isspace(ch);
            }));
}

struct monkey {
  vector<int> items;
  char operation;
  int value;
  int test;
  int mTrue;
  int mFalse;
  int inspected = 0;
};

int main() {
  IOS;

  vector<monkey*> monkeys;
  vector<string> lines;
  string line;
  while (getline(cin, line)) {
    lines.pb(line);
  }

  rangefrom(i, 1, sizeof(lines)) {
    string itemsLine = lines[i];
    string operationLine = lines[++i];
    string testLine = lines[++i];
    string trueLine = lines[++i];
    string falseLine = lines[++i];

    ltrim(itemsLine);
    ltrim(operationLine);
    ltrim(testLine);
    ltrim(trueLine);
    ltrim(falseLine);

    if (itemsLine.empty() || operationLine.empty() || testLine.empty() ||
        trueLine.empty() || falseLine.empty()) {
      break;
    }

    monkey* m = new monkey;

    // getting items, i miss split() T_T
    char* dup = strdup(itemsLine.substr(16).c_str());
    char* token = strtok(dup, ", ");
    vector<int> items;
    while (token != NULL) {
      items.pb(atoi(token));
      token = strtok(NULL, ", ");
    }
    free(dup);
    m->items = items;

    // getting operation
    m->operation = operationLine[21];
    if (operationLine.substr(23, 3) == "old") {
      m->operation = 'o';
      m->value = 0;
    } else {
      m->value = stoi(operationLine.substr(23));
    }

    // getting test
    m->test = stoi(testLine.substr(19));
    m->mTrue = stoi(trueLine.substr(25));
    m->mFalse = stoi(falseLine.substr(26));

    monkeys.pb(m);
    i += 2;
  }

  int round = 20;

  while (round-- > 0) {
    loop(m, monkeys) {
      // DONT INCREMENT THE ITERATOR, BECAUSE WE WILL REMOVE THE ITEM
      for (auto it = m->items.begin(); it != m->items.end(); /*it++*/) {
        int worry = *it;

        if (m->operation == '*') {
          worry *= m->value;
        } else if (m->operation == '+') {
          worry += m->value;
        } else {
          worry *= worry;
        }

        worry /= 3;

        if (worry % m->test == 0) {
          monkeys[m->mTrue]->items.push_back(worry);
        } else {
          monkeys[m->mFalse]->items.push_back(worry);
        }

        m->items.erase(it);
        m->inspected++;
      }
    }
  }

  sort(all(monkeys), [](auto a, auto b) {
    return a->inspected > b->inspected;
  });

  cout << monkeys[0]->inspected * monkeys[1]->inspected << endl;

  loop(m, monkeys) {
    delete m;
  }

  return 0;
}