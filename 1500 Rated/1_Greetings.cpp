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
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());
    ordered_set st;
    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        ans += st.size() - st.order_of_key(v[i].second);
        st.insert(v[i].second);
    }
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
