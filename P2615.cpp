#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> box(n+1,vector<int> (n+1,0));
    box[n/2+1][1]=1;
    int last_x=n/2+1,last_y=1;
    for(int i=2;i<=n*n;++i){
        if(last_y==1&&last_x!=n){
            last_y=n;
            last_x++;
            box[last_x][last_y]=i;
        }
        else if(last_x==n&&last_y!=1){
            last_x=1;
            last_y--;
            box[last_x][last_y]=i;
        }
        else if(last_x==n&&last_y==1){
            last_y++;
            box[last_x][last_y] = i;
        }
        else{
            if(box[last_x+1][last_y-1]==0){
                last_x++;
                last_y--;
                box[last_x][last_y] = i;
            }
            else {
                last_y++;
                box[last_x][last_y] = i;
            }
        }
    }

    for(int i=1;i<=n;++i){
        int first=1;
        for(int j=1;j<=n;++j){
            if(first==0) cout<<' ';
            cout<<box[j][i];
            first=0;
        }
        cout<<endl;
    }

    return 0;
}