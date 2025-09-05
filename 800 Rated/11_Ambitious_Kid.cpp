#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    ll n;
    cin >> n;
    ll maximinus = INT_MIN, miniplus = INT_MAX;
    for (ll i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        if (temp < 0) maximinus = max (maximinus, temp);
        else miniplus = min (miniplus, temp);
    }
    cout << min (-maximinus, miniplus);
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    solve();
    return 0;
}
