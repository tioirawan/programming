#include <bits/stdc++.h>
#define ll long long int
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define MOD 1000000007

using namespace std;

int main()
{
    FAST

        int t;
    cin >> t;

    while (t-- > 0)
    {
        int n;
        cin >> n;

        int arr[n];

        bool invalidPrice = false;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if(arr[i] < 0 || arr[i] > 1000) {
                invalidPrice = true;
            }
        }

        if(n < 2 || n > 1000 || invalidPrice) {
            continue;
        }

        int temp[n];
        for (int i = 0; i < n; i++)
        {
            temp[i] = arr[i];
        }

        sort(temp, temp + n);

        int minMax = INT_MIN;
        int maxDifRes = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            // if (temp[i] == minMax) break;

            int maxDif = INT_MIN;
            int maxVal = INT_MIN;

            int index = find(arr, arr + n, temp[i]) - arr;

            for (int j = index + 1; j < n; j++)
            {
                if(arr[j] < temp[i]) continue;

                int diff = abs(temp[i] - arr[j]);

                if (diff > maxDif)
                {
                    maxDif = diff;
                    maxVal = arr[j];
                }
            }

            if (maxVal > minMax)
            {
                minMax = maxVal;
            }

            if (maxDif > maxDifRes)
            {
                maxDifRes = maxDif;
            }
        }

        maxDifRes == INT_MIN ? cout << -1 << endl : cout << maxDifRes << endl;
    }

    return 0;
}