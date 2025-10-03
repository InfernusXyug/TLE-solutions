#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve () {
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    ll ans = -1;
    for (ll i = 0; i < n-1; i++) {
        ll cnt1 = 0, cnt2 = 0;
        for (ll j = 0; j <= i; j++) {
            if (v[j] == 2) cnt1++;
        }
        for (ll j = i+1; j < n; j++) {
            if (v[j] == 2) cnt2++;
        }
        if (cnt1 == cnt2) {
            ans = i+1;
            break;
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
