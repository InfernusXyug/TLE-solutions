#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    ll n;
    cin >> n;
    ll i = 0;
    ll last = 0, temp = n;
    while (temp != 0) {
        i++;
        last = temp % 10;
        temp /= 10;
    }
    ll ans = 0;
    for (ll j = 1; j < i; j++) ans += 9LL;
    ans += last;
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
