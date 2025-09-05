#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve () {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    vector<ll> ans;
    ans.pb(v[0]);
    for (ll i = 1; i < n; i++) {
        if (v[i] >= v[i-1]) ans.pb(v[i]);
        else {
            ans.pb(1LL);
            ans.pb(v[i]);
        }
    }
    cout << ans.size() << endl;
    for (auto it : ans) cout << it << " ";
    cout << endl;
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
