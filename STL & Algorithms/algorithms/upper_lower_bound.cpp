#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a+n);
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
    int v;
    cin>>v;
    int *ptr = lower_bound(a, a+n, v);
    int *ptr2 = upper_bound(a, a+n, v);
    cout<<*ptr<<" "<<*ptr2<<endl;

    return 0;
}
