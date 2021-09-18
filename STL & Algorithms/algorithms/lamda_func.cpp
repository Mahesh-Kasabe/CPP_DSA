#include <bits/stdc++.h>
using namespace std;

int main(){

// lamda Function 

    auto sum = [](int x, int y){return x+y;};
    cout<< sum(4,5)<<endl;

//all_of positive print true/1 

vector<int> v= {2,3,4,5};
cout<< all_of(v.begin(), v.end(), [](int x){return x > 0;})<<endl;

//any_of positive then print 1/true

cout<< any_of(v.begin(), v.end(), [](int x){return x > 0;})<<endl;

//none_of positive print true/1

cout<< none_of(v.begin(), v.end(), [](int x){return x > 0;})<<endl;

}