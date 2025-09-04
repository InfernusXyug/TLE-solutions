#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++) {
        ll b;
        cin >> b;
        mp[b]++;
    }
    if (mp.size() > 2) cout << "NO\n";
    else {
        if (mp.size() == 1) cout << "YES\n";
        else if (mp.size() == 2) {
            ll temp;
            for (auto it : mp) {
                temp = it.second;
            }
            if (abs (mp.begin()->second - temp) <= 1) cout << "YES\n";
            else cout << "NO\n";
        }
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
