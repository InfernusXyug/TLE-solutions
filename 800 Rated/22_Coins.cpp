#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve () {
    ll n, k;
    cin >> n >> k;
    bool check = false;
    if (n % 2 == 0) check = true;
    if ((n-k) % 2 == 0) check = true;
    if (check) cout << "YES\n";
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
