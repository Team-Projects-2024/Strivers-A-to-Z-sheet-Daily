// ------------------optimal-----------
#include <bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.
    sort(arr.begin(),arr.end());
    set<vector<int>>st;
    int sum =0;
    for(int i=0;i<n;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            sum = arr[i]+arr[j]+arr[k];
            if(sum>0){
                //decrease the sum
                k--;
                while(arr[k] == arr[k+1] && k>j ){
                    k--;
                }
            }else if (sum<0){
                //increase the sum
                j++;
                while(arr[j] == arr[j-1] && j<k ){
                    j++;
                }
            }else{
                st.insert({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
        }
    }

    vector<vector<int>>solution(st.begin(),st.end());
    return solution;
}
