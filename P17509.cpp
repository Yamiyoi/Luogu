// P17509[入门赛 #52] 中秋灯谜
// https://www.luogu.com.cn/problem/P17509
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int score(int n){
    if(n<2) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    long long result=0;
    int n;
    string s;
    cin>>s;
    
    for(int i=0;i+1<(int)s.size();++i){
        n=(s[i]-'0')*10+(s[i+1]-'0');
        if(score(n)){
            result+=n;
        }
    }
    cout<<result;
    return 0;
}