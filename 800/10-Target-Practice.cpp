#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll INFLL = 1e18;

void solve() {
  string s;
  int total = 0;
  int r = 0, l = 0, t = 0, b = 0;
  for (int i = 0; i < 10; i++) {
    cin >> s;
    for (int j = 0; j < 10; j++) {
      if (s[j] == 'X') {
        t = i + 1;
        l = j + 1;
        r = 10 - j + 1;
        b = 10 - i + 1;
      }
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
