#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    if (k >= 2) cout << "YES" << endl;
    else {
        bool asc = true;
        for (ll i = 0; i < n-1; i++) {
            if (v[i] > v[i+1]) asc = false;
        }
        if (asc) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
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
