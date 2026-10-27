// P17791[入门赛 #53] 美术课
// https://www.luogu.com.cn/problem/P17791
#include <iostream>

using namespace std;

int main() {
  int n;
  int ji = 1;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    if (ji == 1) {
      for (int j = n - i; j > 0; j--) {
        cout << "+";
      }
      ji = 0;
    } else {
      for (int j = n - i; j > 0; j--) {
        cout << "-";
      }
      ji = 1;
    }
    cout << endl;
  }
  return 0;
}