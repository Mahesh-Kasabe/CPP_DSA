#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n;i++){
        cin>>v[i];
    }
    int val; 
    cin>>val;

    int min = *min_element(v.begin(), v.end());
    int max = *max_element(v.begin(), v.end());
    cout<< min <<endl <<max << endl;

    int sum = accumulate(v.begin(), v.end(), val);
    cout<< sum << endl;

    int cnt = count(v.begin(), v.end() , val);
    cout<< cnt << endl;

    auto it = find(v.begin(), v.end(), val);
    cout<< *it << endl;

    reverse(v.begin(), v.end());
    for(auto value : v){
    cout<< value <<endl;
    }

    // string s = "mahesh";
    // reverse(s.begin() , s.end());
    // cout<< s << endl;

    return 0;
}