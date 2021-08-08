#include <bits/stdc++.h>
using namespace std;

int main(){

// lamda Function 

    auto sum = [](int x, int y){return x+y;};
    cout<< sum(4,5)<<endl;

// all_of algorithm

vector<int> v= {2,3,4,5};
cout<< all_of(v.begin(), v.end(), [](int x){return x > 0;})<<endl;

//any_of algorithm 

cout<< any_of(v.begin(), v.end(), [](int x){return x > 0;})<<endl;



}