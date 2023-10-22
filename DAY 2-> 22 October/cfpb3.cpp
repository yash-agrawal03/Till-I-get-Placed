#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < k)
            {
                ans = min(ans, k - arr[i]);
            }
            else if (k == 4 && arr[i] % 2 != 0)
            {
                ans = min(ans, 1);
            }
            else if (arr[i] % k != 0)
            {
                int div = arr[i] / k;
                ans = min(ans, k * (div + 1) - arr[i]);
            }
            else
            {
                ans = min(ans, 0);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
