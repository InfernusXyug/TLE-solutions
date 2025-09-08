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
    ll a, b, c;
    cin >> a >> b >> c;
    ll f = c - c/2, s = c/2;
    f += a, s += b;
    cout << ((f > s) ? "First" : "Second");
    cout << endl;
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
