class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // bruteforce -> i can perform linear search on it in which the previous and the next of the element must to smaller then the element where i am standing right now

        int n = nums.size();

        for(int i=0;i<n;i++){
            if((i==0 || nums[i-1]<nums[i]) && (i==n-1 || nums[i]>nums[i+1] )){
                return i;
            }
        }
        return -1;
    }
};