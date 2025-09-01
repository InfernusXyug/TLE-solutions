#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    ll n, x;
    cin >> n >> x;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    vector<ll> ans;
    ans.push_back(v[0]);
    for (ll i = 0; i < n-1; i++) {
        ans.push_back(v[i+1] - v[i]);
    }
    ans.push_back(2 * (x - v[n-1]));
    sort (ans.begin(), ans.end());
    cout << ans.back() << endl;
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        solve ();
    }
    return 0;
}
