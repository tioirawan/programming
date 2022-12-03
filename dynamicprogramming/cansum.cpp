#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

bool canSum(int target, int n, int nums[], unordered_map<int, bool> &memo) {
  if(memo.find(target) != memo.end()) return memo[target];

  if(target == 0) return true;


  for (int i = 0; i < n; i++)
  {
    if(target < nums[i]) continue;

    if(canSum(target - nums[i], n, nums, memo)) {
      memo[target] = true;
      return memo[target];
    }
  }
  

  memo[target] = false;
  return memo[target];
}

int main() {
  FAST

  int target, n;
  cin >> target >> n;

  int nums[n];
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }

  unordered_map<int, bool> memo;

  cout << canSum(target, n, nums, memo);

  return 0;
}