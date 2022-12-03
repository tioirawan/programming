#include <iostream>

using namespace std;

int main() {
  int a[3];
  for (int i = 0; i < 3; i++)
  {
    cin >> a[i];
  }

  char k;
  cin >> k;

    for (int i = 0; i < 3; i++)
    {
      int m = i;
      for (int j = i + 1; j < 3; j++)
      {
        if (k=='0')
        {
          if (a[i] < a[j])
        {
          m = j;
        }
        } else if(k=='1'){
          if (a[i] > a[j])
        {
          m = j;
        }
        }  
        
      }
      int temp = a[i];
      a[i] = a[m];
      a[m] = temp;
    }
  
  for (int i = 0; i < 3; i++)
  {
    cout << a[i] << " ";
  }
  

  return 0;
}