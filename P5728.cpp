// P5728 【深基5.例5】旗鼓相当的对手
// https://www.luogu.com.cn/problem/P5728
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,sum=0;
    cin >> n;
    vector<vector<int>> score(n, vector<int>(3, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> score[i][j];
        }
    }
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (abs(score[i][0] + score[i][1] + score[i][2] - score[j][0] - score[j][1] - score[j][2]) > 10)
                continue;
            for (int k = 0; k < 3; ++k) {
                if (abs(score[i][k] - score[j][k]) > 5) {
                    break;
                }
                else{
                    if(k==2) sum++;
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}