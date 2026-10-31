// P1047 [NOIP 2005 普及组] 校门外的树
// https://www.luogu.com.cn/problem/P1047
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int l, m, sum = 0;
    cin >> l >> m;
    vector<int> tree(l + 1, 1);
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        for (; a <= b; a++) {
            tree[a] = 0;
        }
    }
    for (int i = 0; i <= l; ++i) {
        if (tree[i] == 1)
            sum++;
    }
    cout << sum;
    return 0;
}