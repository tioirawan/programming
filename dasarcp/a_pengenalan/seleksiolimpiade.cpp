#include <bits/stdc++.h>
#define FAST                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
#define MOD 1000000007
typedef long long ll;

using namespace std;

struct peserta {
  string id;
  int s1, s2, s3;
};

bool cp(peserta a, peserta b) {
  if (a.s3 != b.s3) return a.s3 > b.s3;
  if (a.s2 != b.s2) return a.s2 > b.s2;
  return a.s1 > b.s1;
}

void solve() {
  int N, M;
  string ID;

  cin >> N >> M >> ID;

  peserta sc[N];

  for (int i = 0; i < N; i++) {
    cin >> sc[i].id >> sc[i].s1 >> sc[i].s2 >> sc[i].s3;
  }

  sort(sc, sc + N, cp);

  bool qul = false;

  for (int i = 0; i < M; i++) {
    if (sc[i].id == ID) {
      qul = true;
      break;
    }
  }

  if (qul) {
    cout << "YA"
         << "\n";
  } else {
    cout << "TIDAK"
         << "\n";
  }
}

int main() {
  FAST;

  int T;
  cin >> T;

  while (T-- > 0) {
    solve();
  }

  return 0;
}