#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve () {
    ll n, a, b;
    cin >> n >> a >> b;
    if (n == 1) {cout << "YES\n"; return;}
    if (n - a - b > 1 || (n==a && n==b)) cout << "YES\n";
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
