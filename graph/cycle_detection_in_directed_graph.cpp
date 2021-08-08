#include <bits/stdc++.h>
using namespace std;

int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>> adj(v);

    for(int i=0; i<v; i++){
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    


    return 0;
}