// P5727 【深基5.例3】冰雹猜想
// https://www.luogu.com.cn/problem/P5727
#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    a.push_back(n);
    while(n!=1){
        if(n%2!=0){
            n=n*3+1;
        }
        else {
            n/=2;
        }
        a.push_back(n);
    }

    reverse(a.begin(), a.end());

    for(size_t i=0;i<a.size();++i){
        if(i>0){
            cout<<' ';
        }
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}