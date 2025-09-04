#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve () {
    ll n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    ll cnt = 0;
    if (x.size() >= m) {
        for (ll i = 0; i <= x.size() - m; i++) {
            if (x.substr(i, m) == s) {
                cout << cnt << endl;
                return;
            }
        }
    }

    while (x.size() <= 2*m || cnt < 2) {
        x += x;
        cnt++;
        if (x.size() < m) continue;
        for (ll i = 0; i <= x.size() - m; i++) {
            if (x.substr(i, m) == s) {
                cout << cnt << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
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
