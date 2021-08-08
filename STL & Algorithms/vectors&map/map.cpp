#include <iostream>
#include <map>
using namespace std;

int main(){
	map<int,string> m;
	m[1] = "abc";
	m[2] = "def";
	m[3] = "ghi";
	m.insert({4,"jkl"});
	for(auto pair : m){
	cout<< pair.first<< " " << pair.second<<endl;

	}
	
		
	return 0;
}
