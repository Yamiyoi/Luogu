// P17506 [入门赛 #52] 分月饼
// https://www.luogu.com.cn/problem/P17507
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    double cake = 0;
    int result = 0;
    cin >> a >> b;
    cake += (a / 3.0) + (b / 4.0);
    result = cake / 1;
    if (cake > result)
        result++;
    cout << result;
    return 0;
}