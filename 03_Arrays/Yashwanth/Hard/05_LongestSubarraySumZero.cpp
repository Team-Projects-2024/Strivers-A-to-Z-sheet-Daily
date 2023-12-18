// --------------Brute o(n^2)----------------
#include<bits/stdc++.h>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	int n = arr.size();
	int sum=0;
	int maxLen = 0;
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			if(sum==0){
				maxLen = max(maxLen,(j-i)+1);
			}
		}
	}
// if(sum==0){
// 	maxLen = max(maxLen,(j-i)+1);
// }
	return maxLen;
}

//-----------------using prefix sum -------------------------

#include<bits/stdc++.h>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	int n= arr.size();
	map<int,int>mpp;
	int maxLen = 0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		if(sum == 0){
			maxLen = max(maxLen,i+1);
			continue;
		}
		if(i!=0 && mpp.find(sum) != mpp.end() ){
			maxLen = max(maxLen,(i- mpp[sum]));
			
		}else{
			mpp[sum] = i;
		}
	}
	return maxLen;
	
}