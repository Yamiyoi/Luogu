#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int w, x, h, q, sum = 0;
    cin >> w >> x >> h >> q;
    vector<vector<vector<int>>> cube(w + 1, vector<vector<int>>(x + 1, vector<int>(h + 1, 1)));
    for (int i = 0; i < q; ++i) {
        int b_x, b_y, b_z, e_x, e_y, e_z;
        cin >> b_x >> b_y >> b_z >> e_x >> e_y >> e_z;
        for (int j = b_x; j <= e_x; ++j) {
            for (int k = b_y; k <= e_y; ++k) {
                for (int l = b_z; l <= e_z; ++l) {
                    cube[j][k][l] = 0;
                }
            }
        }
    }
    for (int i = 1; i <= w; ++i) {
        for (int j = 1; j <= x; ++j) {
            for (int k = 1; k <= h; ++k) {
                if (cube[i][j][k] == 1)
                    sum++;
            }
        }
    }

    cout << sum << endl;
    return 0;
}