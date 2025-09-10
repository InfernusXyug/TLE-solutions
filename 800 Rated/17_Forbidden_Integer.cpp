#pragma GCC optimize("O3", "inline")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define pb push_back
#define endl "\n"
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    ordered_set;

void solve () {
    ll n, k, x;
    cin >> n >> k >> x;
    if (x != 1) {
        cout << "YES\n" << n << endl;
        for (ll i = 0; i < n; i++) cout << 1 << " ";
        cout << endl;
    }
    else if (k == 1 || (k == 2 && n % 2)) cout << "NO\n";
    else {
        cout << "YES\n" << n/2 << endl;
        if (n%2) cout << 3 << " ";
        else cout << 2 << " ";
        for (ll i = 0; i < n/2-1; i++) cout << 2 << " ";
        cout << endl;
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
