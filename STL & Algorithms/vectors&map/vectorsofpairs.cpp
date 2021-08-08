#include <iostream>
#include <vector>
using namespace std;

void print(vector<pair<int,int>> v){
    cout<< "Size :" << v.size()<<endl;
    for(int i=0; i<v.size();i++){
        cout<<v[i].first <<" "<< v[i].second <<endl;
    }
    cout<<endl;
}

int main(){
    vector<pair<int,int>> v;
    int n;
    cin>>n;

    for(int i=0; i<n;i++){
        int x;cin>>x;
        int y;cin>>y;
        v.push_back({x,y});
    }

    print(v);

    return 0;
}