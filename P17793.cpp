// P17793 [入门赛 #53] 小洛搬西瓜
// https://www.luogu.com.cn/problem/P17793
#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int a[310] = {}, b[310] = {}, c[310] = {};
  for (int i = 1; i <= n; ++i)
    cin >> a[i];
  for (int j = 1; j <= m; ++j)
    cin >> b[j];
  while (1) {
    int carry = 0;
    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= m; ++j) {
        if (a[i] >= b[j] && b[j] != 0) {
          c[i] += b[j];
          b[j] = 0;
          carry = 1;
          break;
        }
      }
    }
    if (carry == 0)
      break;
  }
  int first = 1;
  for (int i = 1; i <= n; ++i) {
    if (first != 1)
      cout << " ";
    cout << c[i];
    first = 0;
  }
  return 0;
}