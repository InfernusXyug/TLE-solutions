#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve () {
    ll n, k;
    cin >> n >> k;
    bool megatron = false;
    for (ll i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        if (temp == k) megatron = true;
    }
    if (megatron) cout << "YES\n";
    else cout << "NO\n";
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
