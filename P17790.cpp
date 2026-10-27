// P17790 [入门赛 #53] 买牛奶
// https://www.luogu.com.cn/problem/P17790
#include <iostream>

using namespace std;

int main() {
  double a, b;
  cin >> a >> b;
  double part_a = a * 0.1;
  int day = 1;
  if (a <= b) {
    printf("%d %.2lf", day, a);
    return 0;
  }
  day = 2;
  while (1) {
    day++;
    a -= part_a;
    if (day == 7) {
      cout << "-1" << endl;
      return 0;
    }
    if (a <= b) {
      printf("%d %.2lf", day, a);
      return 0;
    }
  }
};