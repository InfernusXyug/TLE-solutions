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
    ll n;
    cin >> n;
    vector<ll> v(n+1);
    v[0] = INT_MAX;
    for (ll i = 1; i <= n; i++) cin >> v[i];
    sort (v.begin(), v.end(), greater<ll>());
    v[0] = v.back();
    v.pop_back();
    if (v[0] == v[1]) cout << "NO\n";
    else {
        cout << "YES\n";
        for (auto it : v) cout << it << " ";
        cout << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    auto start = chrono::high_resolution_clock::now();

    ll t;
    cin >> t;
    while (t--) {
        solve ();
    }

    auto end = chrono::high_resolution_clock::now();
    #ifndef LOCAL
        chrono::duration<double> elapsed = end - start;
        cerr << fixed << setprecision(10);
        cerr << "Elapsed time: " << elapsed.count() << "s\n";
    #endif

    return 0;
}
