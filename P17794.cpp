// P17794 [入门赛 #53] 书签
// https://www.luogu.com.cn/problem/P17794
#include <iostream>
#include <string>
using namespace std;
using ll = long long;
int main() {
  int n, c, f_b = 0;
  ll tmp = 0, result = 0;
  cin >> n;
  string s = "010";
  for (int i = 0; i < n; ++i) {
    cin >> c;
    result = result * 2 + (c == f_b) * 2 + 1;
    f_b = c;
  }
  cout << result;
  return 0;
}