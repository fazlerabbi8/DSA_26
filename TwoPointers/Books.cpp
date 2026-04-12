#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int n, t;
    cin >> n >> t;

    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int right = -1, sum = 0, ans = 0;
    for(int left = 0; left < n; sum -= arr[left++])
    {
        while(right + 1 < n && sum + arr[right + 1] <= t)
        {
            sum +=arr[++right];
        }
        ans = max(ans, right - left + 1);
    }
    cout << ans << "\n";
}

int main()
{
    solve();
}