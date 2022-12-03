#include <bits/stdc++.h>
#define ll long long int
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main() {
  FAST

  int N;
  
  cin >> N;

  vector<int> arr;

  while (N-->0)
  {
    int v;
    cin >> v;
    arr.push_back(v);
  }

  bool hr = false;
  int c = 0;
  int lastStart = 1;

  if (arr.size() == 0)
  {
    cout << 0 << endl;
    return 0;
  }

  do {
    hr = false;

    int sd = -1;
    int stopd = -1;
    int prev = arr[0];
    int prevReplaced = arr[0];

    for (int i = lastStart; i < arr.size(); i++)
    {
      // if(arr[i] == arr[i - 1]) continue;
      int cur = arr[i];
      

      if(arr[i] > prev) {
        if(sd == -1) {
          sd = i;
        } else {
          stopd = i;
        }
        
        hr = true;
        arr[i] = prevReplaced;
      }
      
      prev = cur;
      prevReplaced = arr[i - 1];
    }
    

    if(sd != -1) {
      arr.erase( arr.begin(), arr.begin() + sd );
    }
  
    if(hr) {
      c++;
      lastStart = sd;
    }
  } while(hr);

  cout << c << "\n";

  return 0;
}