#include <bits/stdc++.h>
using namespace std;

#define int long long

int getMaxIndexOfElementNotGreaterThan(vector<int>&A, int target){
	int start=0;
	int end;
	int mid;
	while(start<=end){
		int mid=(start+end)/2;
	
		if(A[mid]>=target){
			end=A[mid]-1;
		}
		if(A[mid]<target){
			start=A[mid]+1;
		}
	}
	return end;
}
void solve(){
	int n,k,a;
	cin>>n>>k;
	vector<int>A(n);
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	while(k--){
		cout<<getMaxIndexOfElementNotGreaterThan(A,a)+1<<"\n";
	}
}

signed main() {
	solve();
	return 0;
}
