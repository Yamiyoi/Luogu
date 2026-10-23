// P17507 [入门赛 #52] 中秋竹灯
// https://www.luogu.com.cn/problem/P17507
#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    long long result = 0;
    cin >> x >> y >> z;
    for (x; x <= y; x++)
    {
        result += x / z;
    }
    cout << result;
    return 0;
}