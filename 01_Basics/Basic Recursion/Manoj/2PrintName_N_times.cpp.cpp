#include<bits/stdc++.h>
using namespace std;

void push(vector<string> &v1,int n){
	if(n==0){
		return;
	}
	v1.push_back("Coding Ninjas");
	push(v1,n-1);
	
}

vector<string> printNTimes(int n) {
	// Write your code here.
	cin>>n;
	vector<string> v1;
	push(v1,n);
	return v1;

}

