// P1428 小鱼比可爱
// https://www.luogu.com.cn/problem/P1428
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> fish(n, 0);
    vector<int> result(n, 0);
    for(int i=0;i<n;++i){
        cin>>fish[i];
        for(int j=0;j<i;++j){
            if(fish[j]<fish[i]){
                result[i]++;
            }
        }
    }
    if(!result.empty()){
        cout<<result[0];
        for(int i=1;i<n;++i){
            cout<<' '<<result[i];
        }
    }
    return 0;
}