#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve () {
    ll n;
    cin >> n;
    ll temp1, temp2;
    cin >> temp1;
    ll mini = INT_MAX;
    for (ll i = 1; i < n; i++) {
        cin >> temp2;
        mini = min (mini, temp2-temp1+1);
        temp1 = temp2;
    }
    if (mini < 0) cout << 0 << endl;
    else if (mini % 2 == 0) cout << mini/2 << endl;
    else cout << mini/2 +1 << endl;
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
