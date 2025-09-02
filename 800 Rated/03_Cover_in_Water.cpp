#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve () {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> v;
    v.pb(0LL);
    for (ll i = 0; i < n; i++) {
        if (s[i] == '#') v.pb(i+1);
    }
    v.pb(n+1);
    ll ans = 0;
    for (ll i = 1; i < v.size(); i++) {
        if (v[i] - v[i-1] > 3LL) {
            cout << 2LL << endl;
            return;
        }
        ans += v[i] - v[i-1] - 1LL;
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
