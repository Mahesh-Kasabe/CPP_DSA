#include <iostream>
#include <queue>
using namespace std;

#define vi vector<int>

priority_queue<int , vi , greater<int> > pqmin;
priority_queue<int , vi> pqmax; 

void insert(int x){
    if(pqmin.size() == pqmax.size()){
        if(pqmin.size() == 0){
            pqmax.push(x);
        }
        if(x < pqmax.top()){
            pqmax.push(x);
        }
        else{
            pqmin.push(x);
        }
    }
    else{
           if(pqmax.size() > pqmin.size())
           
            {
                if(x > pqmax.top()){
                pqmin.push(x);
            }
            else{
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }

        
        }

        else{
        

          if(x < pqmin.top()){
                pqmax.push(x);
            }

            else{
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x); 
            }  
        } 
    }
}

double findmedian(){
    if(pqmax.size() == pqmin.size()){
        return (pqmin.top() + pqmax.top())/2.0;
    }

    else if(pqmax.size() > pqmin.size()){
            return pqmax.top();
    }
    else{
        return pqmin.top();
    }
}

signed main(){
    insert(10);
    cout<< findmedian()<<endl;

    insert(15);
    cout<< findmedian()<<endl;

    insert(21);
    cout<< findmedian()<<endl;

    insert(30);
    cout<< findmedian()<<endl;

    insert(18);
    cout<< findmedian()<<endl;

    insert(19);
    cout<< findmedian()<<endl;

    return 0;
}