// P17510[入门赛 #52] 中秋灯会
// https://www.luogu.com.cn/problem/P17510
// 时间复杂度可优化：改色后仅判断相邻4个灯
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int count_same(int h, int w, const vector<vector<int>> &light);

int main()
{
    int h, w, l, same = 0;
    cin >> h >> w;
    vector<vector<int>> light(h + 1, vector<int>(w + 1));
    for (int i = 1; i <= h; ++i)
    {
        for (int j = 1; j <= w; ++j)
        {
            cin >> light[i][j];
        }
    }

    same = count_same(h, w, light);

    int max_same = same;

    for (int i = 1; i <= h; ++i)
    {
        for (int j = 1; j <= w; ++j)
        {
            int og = light[i][j];

            for (int c = 1; c <= 3; ++c)
            {
                if (c != og)
                {
                    light[i][j] = c;
                    max_same = max(max_same, count_same(h, w, light));
                    light[i][j] = og;
                }
            }
        }
    }

    cout << max_same;
    return 0;
}

int count_same(int h, int w, const vector<vector<int>> &light)
{
    int i = 1, j = 1, same = 0;
    while (i <= h)
    {
        j = 1;
        while (j <= w)
        {
            if (j < w && light[i][j] == light[i][j + 1])
                same++;
            if (i < h && light[i][j] == light[i + 1][j])
                same++;
            j++;
        }
        i++;
    }

    return same;
}