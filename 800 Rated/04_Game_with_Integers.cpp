#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    ll n;
    cin >> n;
    if (n % 3) cout << "First\n";
    else cout << "Second\n";
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
