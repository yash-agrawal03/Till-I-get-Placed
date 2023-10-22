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
        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s)
        {
            freq[c - 'a']++;
        }

        int max_freq = *max_element(freq.begin(), freq.end());
        int min_removals = n - max_freq;

        if (min_removals <= k && k <= n)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
