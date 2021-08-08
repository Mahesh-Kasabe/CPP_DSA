#include <iostream>
#include <vector>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for(int i=a; i<b; i++)

void heapsort(vi , &a){


}

int main(){
    int n;
    cin>>n;

    vi a(n);

    rep(i,0,n)
        cin>>a[i];

    heapsort(a);

    return 0;
}