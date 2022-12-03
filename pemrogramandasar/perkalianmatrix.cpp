#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int N, M, P;

  cin >> N >> M >> P;
  
  int A[N][M];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> A[i][j];
    }
  }

  int B[M][P];
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < P; j++) {
      cin >> B[i][j];
    }
  }

  int C[N][P];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < P; j++) {
      C[i][j] = 0;
      for (int k = 0; k < M; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < P; j++) {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }
  
  return 0;
}