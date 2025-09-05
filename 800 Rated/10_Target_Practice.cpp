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

ll func (ll a, ll b) {
    a = min (a + 1LL, 10LL - a);
    b = min (b + 1LL, 10LL - b);
    return min (a, b);
}

void solve () {
    ll ans = 0;
    string s;
    for (ll i = 0; i < 10; i++) {
        cin >> s;
        for (ll j = 0; j < 10; j++) {
            if (s[j] == 'X') ans += func (i, j);
        }
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
