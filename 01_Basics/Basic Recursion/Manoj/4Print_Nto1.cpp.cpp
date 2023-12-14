void print(vector<int> &v1,int n){
    if(n==0){
        return;
    }
    v1.push_back(n);
    print(v1,n-1);
}

vector<int> printNos(int x) {
    vector<int> v1;
    print(v1,x);
    return v1;
}