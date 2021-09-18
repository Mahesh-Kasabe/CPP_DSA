#include <bits/stdc++.h>
using namespace std;
vector <vector <int>> adj;
vector <bool> vis;
vector <int> col;
bool bipart;
void color(int x , int curr){
    if(col[x] != 1 and col[x] != curr){
        bipart = false;
        return;
    }
    col[x] = curr;
    if(vis[x])
    return;
    vis[x] = true;
    for(auto i : adj[x]){
        color(i,curr xor 1);
    }
}
int main(){
    int v,e;
    cin>>v>>e;
    adj = vector<vector<int>>(v);
    vis = vector<bool> (v,false);
    col = vector<int> (v, -1);
    for(int i=0; i<v; i++){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=0; i<v; i++){
        if(!vis[i]){
            color(i,0);
        }

    }
        if(bipart){
            cout<<"Graph is Bipart";
        }
        else{
            cout<<"Graph is not Bipart";
        }
    return 0;
}