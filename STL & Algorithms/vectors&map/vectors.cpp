#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<string> v;
    int n;cin>>n;

    for(int i=0; i<n; i++){
        string x;cin>>x;
        v.push_back(x);    
    }
    cout<<"Size :"<< " "<<v.size()<<endl;
    for(int i=0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }

    return 0;
}