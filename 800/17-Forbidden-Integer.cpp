#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  int n, k, x;
  cin >> n >> k >> x;
  if (x == 1 && k == 1 || x == 1 && n % k == 1 && k == 2) {
    cout << "NO" << endl;
    return;
  } else
    cout << "YES" << endl;

  int total = 0;
  for (int i = 0; i < n; i++) {
    if (n % 2 == 0 && k != 2)
      total = n / 2;
    else {
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
