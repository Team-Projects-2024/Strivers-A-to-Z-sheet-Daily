// ------------TLE ( PARTIIALLY ACCEPTED)----------

#include<bits/stdc++.h>
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    // Write your code here
    set<vector<int>>st;
    sort(nums.begin(),nums.end());
    int n=nums.size();
    long long sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int k=j+1;
            int l=n-1;

            while(k<l){
                sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if(sum<target){
                    // move k
                    k++;
                }else if(sum>target){
                    // move l 
                    l--;
                }else{
                    st.insert({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                    l--;
                while (k < l && nums[k] == nums[k-1]) k++;
                while (l > k && nums[l] == nums[l+1]) l--;
                }

            }
        }
        
    }
    vector<vector<int>>solution(st.begin(),st.end());
    return solution;
}

//----------------------OPTIMAL------------------

#include<bits/stdc++.h>
vector<vector<int>> fourSum(vector<int>& nums, int target) {
    // Write your code here
    set<vector<int>>st;
    sort(nums.begin(),nums.end());
    int n=nums.size();
    long long sum=0;
    for(int i=0;i<n;i++){
        if(i>0 && nums[i] == nums[i-1])continue;
        for(int j=i+1;j<n;j++){
            if(j>i+1 && nums[j] == nums[j-1])continue;
            
            int k=j+1;
            int l=n-1;

            while(k<l){
                sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if(sum<target){
                    // move k
                    k++;
                }else if(sum>target){
                    // move l 
                    l--;
                }else{
                    st.insert({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                    l--;
                while (k < l && nums[k] == nums[k-1]) k++;
                while (l > k && nums[l] == nums[l+1]) l--;
                }
            //  while (j < n && nums[j] == nums[j+1]) j++;
            }
        
        }
        
    }
    vector<vector<int>>solution(st.begin(),st.end());
    return solution;
}