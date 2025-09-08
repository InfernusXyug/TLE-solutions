#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve () {
    ll n;
    cin >> n;
    ll odd = 0, temp;
    for (ll i = 0; i < n; i++) {
        cin >> temp;
        if (temp % 2) odd++;
    }
    if (odd % 2 == 0) cout << "YES\n";
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
