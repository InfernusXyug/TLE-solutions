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
    string s;
    cin >> s;
    ll lo = 0, hi = n-1;
    while (lo <= hi) {
        if (s[lo] == s[hi]) {
            cout << hi - lo + 1 << endl;
            return;
        }
        lo++;
        hi--;
    }
    cout << 0 << endl;
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
