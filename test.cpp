#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 998244353
#define endl "\n"
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int tq = 1; cin >> tq;
  while (tq--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 1, ans = 0;
    for (int i = 2; i < n; i++) {
      if (s[i] == s[i - 2]) {
        cnt++;
      } else {
        ans += (cnt - 1);
        cnt = 1;
      }
    }
    ans += (cnt - 1);


    cout << n - 1 - ans << endl;

  }
  return 0;
}
