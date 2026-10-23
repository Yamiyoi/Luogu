// P17508[入门赛 #52] 画月亮
// https://www.luogu.com.cn/problem/P17508
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,r,x=1,y=1;
    cin>>n>>r;
    int center=(n+1)/2;
    while(y<=n){
        if((x-center)*(x-center)+(y-center)*(y-center)<=r*r){
            cout<<'#';
        }
        else cout<<'.';
        if(x==n){
            cout<<endl;
            x=1;
            y++;
        }
        else x++;
    }
    return 0;
}