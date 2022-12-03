#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

class QueueTs {
  stack<int> s1;
  stack<int> s2;

 public:
  void enqueue(int x) {
    s1.push(x);
  }

  void fill() {
    if (s2.empty()) {
      while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
      }
    }
  }

  int dequeue() {
    if (s1.empty() && s2.empty()) {
      cout << "Queue is empty" << endl;
      exit(0);
    }

    fill();

    int x = s2.top();
    s2.pop();
    return x;
  }

  int top() {
    if (s1.empty() && s2.empty()) {
      cout << "Queue is empty" << endl;
      exit(0);
    }

    fill();

    return s2.top();
  }
};

int main() {
  FAST;

  int q;
  cin >> q;

  QueueTs queue;

  while (q-- > 0) {
    int op;
    cin >> op;

    switch (op) {
      case 1:
        int x;
        cin >> x;
        queue.enqueue(x);
        break;
      case 2:
        queue.dequeue();
        break;
      case 3:
        cout << queue.top() << endl;
        break;
      default:
        break;
    }
  }

  return 0;
}