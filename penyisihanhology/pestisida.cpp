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

  do {
    hr = false;

    int sd = -1;
    int stopd = -1;
    int numDeleted = 0;
    int prev = arr[0];
    int orisize = arr.size();
    
    for (int i = lastStart; i < orisize; i++)
    {
      int index = i - numDeleted;
      int cur = arr[index];

      if(arr[index] > prev) {
        if(sd == -1) {
          sd = index;
        } else {
          stopd = index;
        }

        arr.erase(remove(arr.begin(), arr.end(), cur), arr.end());
        numDeleted++;
      
        hr = true;
      }
      prev = cur;
    }
    
    if(hr) {
      c++;
      lastStart = sd;
    }
  } while(hr);

  cout << c << "\n";
  
  return 0;
}