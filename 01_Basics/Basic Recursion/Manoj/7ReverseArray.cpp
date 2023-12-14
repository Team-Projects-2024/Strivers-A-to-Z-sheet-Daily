void rev(int l,int r,vector<int> &nums){
    if(l>=r){
        return;
    }
    swap(nums[l],nums[r]);
    rev(l+1,r-1,nums);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    rev(0,n-1,nums);
    return nums;
}
