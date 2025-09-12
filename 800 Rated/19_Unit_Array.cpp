#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n"
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    ordered_set;

void solve () {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    map<ll, ll> mp;
    mp[1] = 0, mp[-1] = 0;
    for (ll i = 0; i < n; i++) mp[v[i]]++;
    ll ans = 0;
    if (mp[-1] > mp[1]) {
        ll temp = mp[-1] - mp[1];
        if (temp % 2) ans += (temp) / 2 + 1;
        else ans += (temp) / 2;
    }
    mp[-1] -= ans;
    if (mp[-1] % 2) ans++;
    cout << ans << endl;
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
