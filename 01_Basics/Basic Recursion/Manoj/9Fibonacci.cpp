int fib(int n){
    if(n==1 ||n==2){
        return n-1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    vector<int> v1;
    for(int i=1;i<=n;i++){
        v1.push_back(fib(i));
    }
   return v1;

}