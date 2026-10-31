#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    vector<int> prize(7,0);
    vector<int> count(8,0);
    cin>>n;
    for(int i=0;i<7;++i){
        cin>>prize[i];
    }
    for(int i=0;i<n;++i){
        int match=0;
        vector<int> ticket(7,0);
        for(int j=0;j<7;++j){
            cin>>ticket[j];
        }
        for(int x:prize){
            if(find(ticket.begin(),ticket.end(),x)!=ticket.end()){
                match++;
            }
        }
        count[match]++;
        
    }
    cout<<count[7];
    for(int i=6;i>0;--i){
        cout<<' '<<count[i];
    }
    cout<<endl;
    return 0;
}