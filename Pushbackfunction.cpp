#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int>v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	
	vector<int>::iterator it;
	for(it=v1.begin(); it!=v1.end(); it++){
		cout<<*it;
	}
 //1 2 3
	
}
