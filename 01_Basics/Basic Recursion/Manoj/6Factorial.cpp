#include <bits/stdc++.h>
using namespace std;

long long fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

vector<long long> factorialNumbers(long long n) {
    vector<long long> v1;

    for (int i = 1; i <= n; i++) {
        long long a = 0;
        a = fact(i);
        if(a>n)break;
            v1.push_back(a);
        
    }

    return v1;
}