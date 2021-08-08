#include <bits/stdc++.h>
using namespace std;

bool iscycle(int src,vector<vector<int>> &adj,vector <bool> visited, int parent){
    visited[src] = true;
    for(auto i : adj[src]){
        if(i!=parent){
            if(visited[i])
                return true;
            if(!visited[i] and iscycle(i,adj,visited,src)){
                return true;
            }
        }
    }
    return false;
}
int main(){ 
    int v,e;
    cin>>v>>e;
    vector<vector<int>> adj(v);

    for(int i=0; i<e; i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bool cycle = false;
    vector<bool> visited(v,false);
    for(int i=0; i<v; i++){
        if(!visited[i] && iscycle(i,adj,visited,-1)){
            cycle = true;
        }
    }
    if(cycle){
        cout<<"The cycle is present";
    }
    else{
        cout<<"Cycle is Not present";
    }

    return 0;
}