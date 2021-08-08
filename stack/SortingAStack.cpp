#include <iostream>
#include <stack>
using namespace std;

void insert_at_bottom(stack<int> &s,int x){
    if(s.empty() || s.top()<x){
        s.push(x);
    }else{

    int a = s.top();
    s.pop();
    insert_at_bottom(s,x);
    s.push(a);
    }
}
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    else
    {
    int x = s.top();
    s.pop();
    reverse(s);
    insert_at_bottom(s,x);
    }   
}

int main(){
    stack<int> s;
    s.push(11);
    s.push(2);
    s.push(42);
    s.push(4);

    reverse(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;

    return 0;
}