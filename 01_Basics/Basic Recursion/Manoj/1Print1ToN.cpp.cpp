#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v1,int i,int n){
    if(i>n){
        
        return;
    }
    v1.push_back(i);
    print(v1,i+1,n);
    
}

vector<int> printNos(int x) {
    vector<int> v1;
    print(v1,1,x);
    return v1;

}