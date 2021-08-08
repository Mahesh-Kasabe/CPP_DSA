#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
bool vis[N];
vector<int> adj[N];

void dfs(int node){
    //preorder 

    vis[node] = 1;
    cout<< node <<" ";

    //inorder
    vector<int> :: iterator it;
    for(it = adj[node].begin(); it != adj[node].end(); it++){

        if(vis[*it]);
        else{
            dfs(*it);
        }
    }

    //postorder
    //cout<< node <<" ";

}

int main(){

    for(int i=0; i<=N; i++){
        vis[i] = 0;
    }
    int v,e;
    cin>>v>>e;

    for(int i=0; i<e; i++){
        int x,y; 
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout<<endl;

    dfs(1);


    return 0;
}