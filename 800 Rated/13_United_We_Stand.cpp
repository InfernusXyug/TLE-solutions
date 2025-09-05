#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve () {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    vector<ll> b, c;
    sort (v.begin(), v.end());
    if (v[0] == v[n-1]) {
        cout << -1 << endl;
        return;
    }
    for (ll i = 0; i < n; i++) {
        if (v[i] == v.back()) c.pb(v[i]);
        else b.pb(v[i]);
    } 
    cout << b.size() << " " << c.size() << endl;
    for (auto it : b) cout << it << " ";
    cout << endl;
    for (auto it : c) cout << it << " ";
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
