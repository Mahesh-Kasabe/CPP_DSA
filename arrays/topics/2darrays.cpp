#include <iostream>
using namespace std;

int main(){
    int n , m;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        cout<<endl;
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
    }

    cout<<endl;

    int x;
    cin>>x;

    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                flag = true;
            }
        }
    }

    if(flag){
        cout<<"Element found";
    }else{
        cout<<"Element not found";
    }
}