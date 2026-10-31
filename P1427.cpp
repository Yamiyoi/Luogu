// P1427 小鱼的数字游戏
// https://www.luogu.com.cn/problem/P1427
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    int x;
    while (cin >> x && x != 0) {
        a.push_back(x);
    }
    reverse(a.begin(), a.end());
    for (int i = 0; i < a.size(); ++i) {
        if (i > 0)
            cout << " ";
        cout << a[i];
    }
    cout << endl;
    return 0;
}