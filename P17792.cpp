// P17792 [入门赛 #53] 律动数
// https://www.luogu.com.cn/problem/P17792
#include <iostream>
#include <string>
using namespace std;

int main() {
  int x, y, test, first = 1, exist = 0;
  cin >> x >> y;
  for (int test = x; test <= y; test++) {
    string s = to_string(test);
    int ji = 1;
    int valid = 1;
    for (int i = 0; i < (int)s.size() && valid == 1; ++i) {
      int num = s[i] - '0';
      if (ji == 1 && num % 2 == 0) {
        valid = 0;
      }
      if (ji == 0 && num % 2 != 0) {
        valid = 0;
      }
      ji = 1 - ji;
    }
    if (valid) {
      if (first != 1)
        cout << " ";
      cout << test;
      first = 0;
      exist = 1;
    }
  }
  if (!exist) {
    cout << "-1";
  }
  cout << endl;
  return 0;
}