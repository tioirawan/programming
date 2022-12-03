#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

vector<int> howSum(int target, int n, int nums[], unordered_map<int, bool> &memo) {
  // if(memo.find(target) != memo.end()) return memo[target];

  if(target == 0) {
    vector<int> v;
    return v;
  }
  if(target < 0) {
    vector<int> v;
    v.push_back(-1);
    return v;
  }


  for (int i = 0; i < n; i++)
  {
    if(target < nums[i]) continue;

    vector<int> result;
    
    result = howSum(target - nums[i], n, nums, memo);

    if(result[0] != -1) {
      result.push_back(nums[i]);
      return result;
    }
  }
  

  vector<int> v;
  v.push_back(-1);
  return v;
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

  howSum(target, n, nums, memo);


  // for (int i = 0; i < res.size(); i++)
  // {
  //   cout << res[i] << " ";
  // }

  return 0;
}