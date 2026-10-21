// P1909 [NOIP 2016 普及组] 买铅笔
// https://www.luogu.com.cn/problem/P1909
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int need, pen1_amount, pen1_price, pen2_amount, pen2_price, pen3_amount, pen3_price;
    cin >> need >> pen1_amount >> pen1_price >> pen2_amount >> pen2_price >> pen3_amount >> pen3_price;
    int cost;
    pen1_price *= need / pen1_amount + (need % pen1_amount != 0);
    pen2_price *= need / pen2_amount + (need % pen2_amount != 0);
    pen3_price *= need / pen3_amount + (need % pen3_amount != 0);
    cost = min(pen1_price, min(pen2_price, pen3_price));
    cout << cost;
    return 0;
}